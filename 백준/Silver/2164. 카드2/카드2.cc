#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int n, res;
    bool check = false;
    cin >> n;
    for(int i=1; i<=n; i++) {
        q.push(i);
    }
    while(!q.empty())
    {
        res = q.front();
        q.pop();
        if(check)
        {
            q.push(res);
        }
        check = !check;
    }
    cout << res;
    return 0;
}