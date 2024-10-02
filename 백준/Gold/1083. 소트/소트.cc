#include <iostream>
#include <vector>
using namespace std;
int maxs(vector<int>& arr, int st, int end);
int n;
int main(void)
{
	vector<int> arr;
	int s, tmp;
	cin >> n;
	arr.resize(n);
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	cin >> s;
	for (int i = 0;i < n;i++)
	{
		tmp = maxs(arr, i, s);
		for (int j = tmp;j >i;j--)
		{
			swap(arr[j], arr[j-1]);
			s--;
		}
	}
	for (int i : arr)
	{
		cout << i << " ";
	}
	return 0;
}

int maxs(vector<int>& arr, int st, int end)
{
	int max = 0, mi=st;
    int m=end+st<=n-1?end+st:n-1;
	for (int i=st;i<=m;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			mi = i;
		}
	}
	return mi;
}