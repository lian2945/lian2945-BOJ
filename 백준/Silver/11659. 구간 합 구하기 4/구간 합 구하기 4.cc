#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, s, e;
    vector<int> v, sum;
    cin >> n >> m;
    v.resize(n+1);
    sum.resize(n+1);
    v[0] = 0;
    sum[0] = 0;
    for(int i=1; i<=n; i++) {
        cin >> v[i];
        sum[i] = sum[i-1] + v[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> s >> e;
        cout << sum[e] - sum[s-1] << "\n";
    }
    return 0;
}