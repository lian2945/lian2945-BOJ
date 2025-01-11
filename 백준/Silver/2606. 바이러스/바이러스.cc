#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int count, row;
    int x, y, total=0;
    queue<int> q;
    vector<vector<int>> computer;
    vector<bool> check;
    cin >> count;
    cin >> row;
    computer.resize(count+1);
    check.resize(count+1, false);
    for(int i=0; i<row; i++)
    {
        cin >> x >> y;
        computer[x].push_back(y);
        computer[y].push_back(x);
    }
    q.push(1);
    check[1]=true;
    while(!q.empty())
    {
        for(const auto& v : computer[q.front()])
        {
            if(check[v]==false)
            {
                q.push(v);
                total++;
                check[v]=true;
            }
        }
        q.pop();
    }
    cout << total;
    return 0;
}