#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> list;
    int n, m, v;
    int min = 999999;
    cin >> n >> m;
    list.resize(n);
    for(int i=0; i<n; i++)
    {
        cin >> list[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j) continue;
            for(int k=0; k<n; k++)
            {
                if(i==k || j==k) continue;
                int t = list[i]+list[j]+list[k];
                if(t<=m && abs(t-m)<=min)
                {
                    min = abs(t-m);
                    v = t;
                }
            }
        }
    }
    cout << v;
    return 0;
}