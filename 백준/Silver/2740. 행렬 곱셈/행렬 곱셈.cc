#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	int n1, m1, n2, m2;
	int a[101][101];
	int b[101][101];
	cin >> n1 >> n2;
	for (int i = 0;i < n1;i++)
	{
		for (int j = 0;j < n2;j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> m1 >> m2;
	for (int i = 0;i < m1;i++)
	{
		for (int j = 0;j < m2;j++)
		{
			cin >> b[i][j];
		}
	}
	for (int i = 0;i < n1;i++)
	{
		for (int j = 0;j < m2;j++)
		{
			int t = 0;
			for (int k = 0;k < m1;k++)
			{
				t += a[i][k] * b[k][j];
			}
			cout << t << " ";
		}
		cout << "\n";
	}
	return 0;
}