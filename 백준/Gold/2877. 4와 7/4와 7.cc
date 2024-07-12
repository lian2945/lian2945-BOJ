#include <iostream>
using namespace std;
int main(void)
{
	unsigned long long int a, total = 0, i;
	int seat = 0, cnt = 0, s, l;
	string sd;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a;
	for (i = 2;total < a;i *= 2)
	{
		total += i;
		cnt++;
	}
	l = i / 4;
	s = a - (total - (i / 2) + 1);
	for (long long i = 0;i < cnt;i++)
	{
		sd += '4';
	}
	seat = 0;
	while (s)
	{
		if (s >= l)
		{
			s -= l;
			sd[seat++] = '7';
			l /= 2;
		}
		else
		{
			seat++;
			l /= 2;
		}
	}
	cout << sd;
	return 0;
}