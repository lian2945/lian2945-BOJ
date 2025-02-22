#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n, m, t = 999999999999;
    vector<int> v;
    cin >> n >> m;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        if(t > (v[i] + v[i+1])*m) t = (v[i] + v[i+1])*m;
    }
    cout << t;
    return 0;
}