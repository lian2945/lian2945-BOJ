#include <iostream>
using namespace std;
enum Loma 
{
	N=0, I=1, V=5, X=10, L=50, C=100, D=500, M=1000
};

Loma ChartoLoma(char c)
{
	Loma l;
	switch (c)
	{
		case 'N':
			l = N;
			break;
		case 'I':
			l = I;
			break;
		case 'V':
			l = V;
			break;
		case 'X':
			l = X;
			break;
		case 'L':
			l = L;
			break;
		case 'C':
			l = C;
			break;
		case 'D':
			l = D;
			break;
		case 'M':
			l = M;
			break;
		default:
			l = N;
			break;
	}
	return l;
}

int Decode(string cmd)
{
	int total = 0;
	char nc, bc;
	Loma n, b;
	if (cmd.length() == 1) return ChartoLoma(cmd[0]);
	for (int i = 0;i < cmd.length();i++)
	{
		nc = cmd[i];
		if (i > 0)
		{
			n = ChartoLoma(nc);
			b = ChartoLoma(bc);
			if (n > b && b != 0)
			{
				total += n - b;
				bc = 'N';
			}
			else if (i < cmd.length() - 1)
			{
				total += b;
				bc = nc;
			}
			else
			{
				total += b + n;
			}
		}
		else
		{
			bc = nc;
		}
	}
	return total;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string Index1, Index2, str;
	int sum, cnt=100;
	cin >> Index1;
	cin >> Index2;
	sum = Decode(Index1) + Decode(Index2);
	cout << sum << "\n";
	for (int i = 0;i < sum / 1000;i++)
	{
		str+="M";
	}
	sum -= (sum / 1000) * 1000;
	while (sum)
	{
		if (sum / cnt == 4)
		{
			if (cnt == 100) str+="CD";
			else if (cnt == 10) str+="XL";
			else str+="IV";
		}
		else if (sum / cnt == 9)
		{
			if (cnt == 100) str+="CM";
			else if (cnt == 10) str+="XC";
			else str+="IX";
		}
		else if(sum/cnt>=5)
		{
			if (cnt == 1)
			{
				str+="V";
				for (int i = 0;i < sum - 5;i++)
				{
					str+="I";
				}
			}
			else if (cnt == 10)
			{
				str+="L";
				for (int i = 0;i < (sum / cnt) - 5;i++)
				{
					str+="X";
				}
			}
			else
			{
				str+="D";
				for (int i = 0;i < (sum / cnt) - 5;i++)
				{
					str+="C";
				}
			}
		}
		else
		{
			if (cnt == 1)
			{
				for (int i = 0;i < sum;i++)
				{
					str+="I";
				}
			}
			else if (cnt == 10)
			{
				for (int i = 0;i < (sum / cnt);i++)
				{
					str+="X";
				}
			}
			else
			{
				for (int i = 0;i < (sum / cnt);i++)
				{
					str += "C";
				}
			}
		}
		sum -= (sum / cnt)*cnt;
		cnt/=10;
	}
	cout << str;
	return 0;
}