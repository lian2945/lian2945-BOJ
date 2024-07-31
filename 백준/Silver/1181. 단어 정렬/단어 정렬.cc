#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b)
{
	if (a.size() == b.size())
	{
		int i = 0;
		while (a[i] == b[i] && i<a.size()) i++;
		return a[i] < b[i];
	}
	else return a.size() < b.size();
}

int main(void)
{
	vector<string> str;
	int n;
	string bef;
	cin >> n;
	str.resize(n);
	for (int i = 0;i < n;i++)
	{
		cin >> str[i];
	}
	sort(str.begin(), str.end(), cmp);
	for (auto c : str)
	{
		if(c!=bef) cout << c << "\n";
		bef = c;
	}
	return 0;
}