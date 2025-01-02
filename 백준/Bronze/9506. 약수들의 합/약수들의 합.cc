#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, t;
    queue<int> q;
    while(n!=-1)
    {
        cin >> n;
        if(n==-1) break;
        t=0;
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                q.push(i);
                t+=i;
            }
        }
        if(t==n)
        {
            cout << n << " = ";
            int b = 1;
            while(!q.empty())
            {
                if(b==0) cout << " + ";
                b=0;
                cout << q.front();
                q.pop();
            }
            cout << "\n";
        }
        else
        {
            while(!q.empty())
            {
                q.pop();
            }
            cout << n << " is NOT perfect.\n";
        }
    }
    return 0;
}