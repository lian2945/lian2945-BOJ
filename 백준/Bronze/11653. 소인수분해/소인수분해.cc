#include <iostream>
#include <vector>
using namespace std;
vector<bool> prime(100000000, true);
vector<int> primeset;
void Eratones(int n);
int main(void)
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int n;
	cin >> n;
	if (n == 1) return 0;
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		cout << n;
		return 0;
	}
	if (n == 4 || n == 6)
	{
		cout << 2 << "\n" << n / 2;
		return 0;
	}
	if (n == 8)
	{
		cout << 2 << "\n" << 2 << "\n" << 2;
		return 0;
	}
	for (int i = 4;i <= n;i += 2)
	{
		prime[i] = false;
	}
	primeset.push_back(2);
	Eratones(n);
	for (auto i : primeset)
	{
		while (n % i == 0)
		{
			n /= i;
			cout << i << "\n";
		}
	}
	return 0;
}

void Eratones(int n)
{
	int i;
	for (i = 3;i*i <= n;i += 2)
	{
		if (prime[i])
		{
			for (int j = i * i;j <= n;j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int k = 3;k <= n;k += 2)
	{
		if (prime[k]) primeset.push_back(k);
	}
}