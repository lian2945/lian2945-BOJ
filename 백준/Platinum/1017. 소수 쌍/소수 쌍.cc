#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> Prime(2001, true);
class resets {
public:
	resets();
	vector<bool> visited;
	vector<int> sides[1001];
	vector<int> linkedline;
};

resets::resets(void)
{
	visited.resize(1001, false);
	linkedline.resize(1001, 0);
}

void Primes(void)
{
	for (int i = 2;i*i <= 2000;i++)
	{
		if (Prime[i])
		{
			for (int j = i * i;j <= 2000;j += i)
			{
				Prime[j] = false;
			}
		}
	}
}

bool dfs(int n, resets *a)
{
	for (int i = 0;i < a->sides[n].size();i++)
	{
		int tmp = a->sides[n][i];
		if (a->visited[tmp]) continue;
		a->visited[tmp] = true;
		if (a->linkedline[tmp] == 0 || dfs(a->linkedline[tmp], a))
		{
			a->linkedline[tmp] = n;
			return true;
		}
	}
	return false;
}

int main(void)
{
	vector<int> index;
	vector<int> Flist;
	vector<int> Okay;
	int n, cnt=0;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	index.resize(n);
	Primes();
	for (int i = 0;i < n;i++)
	{
		cin >> index[i];
		if (i != 0 && Prime[index[i] + index[0]]) Flist.push_back(index[i]);
	}
	for (int Fl : Flist)
	{
		cnt = 0;
		resets *a = new resets();
		a->sides[Fl].push_back(index[0]);
		a->sides[index[0]].push_back(Fl);
		for (int i = 1;i < n;i++)
		{
			if (index[i] == Fl) continue;
			for (int j = 1;j < n;j++)
			{
				if (index[j] == Fl) continue;
				if (Prime[index[i] + index[j]])
				{
					a->sides[index[i]].push_back(index[j]);
					a->sides[index[j]].push_back(index[i]);
				}
			}
		}
		for (int i = 0;i < n;i++)
		{
			fill(a->visited.begin(), a->visited.end(), false);
			if(dfs(index[i], a)) cnt++;
		}
		if (cnt >= n) Okay.push_back(Fl);
	}
	if (Okay.empty()) cout << -1;
	else
	{
		sort(Okay.begin(), Okay.end());
		for (int i : Okay)
		{
			cout << i << " ";
		}
	}
	return 0;
}