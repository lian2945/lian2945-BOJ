#include <iostream>
#include <vector>
using namespace std;
int MaxDivNumber(int a, int b);
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int idx, befn=0, nn=0, lcd = 0;
	vector<int> arr;
	cin >> idx;
	arr.resize(idx-1);
	for (int i = 0; i < idx; i++)
	{
		cin >> nn;
		if (i > 0) arr[i - 1] = abs(nn - befn);
		befn = nn;
	}
	lcd = arr[0];
	for (int i=1;i<idx-1;i++)
	{
		lcd = MaxDivNumber(lcd, arr[i]);
	}
	cout << lcd;
	return 0;
}

int MaxDivNumber(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}