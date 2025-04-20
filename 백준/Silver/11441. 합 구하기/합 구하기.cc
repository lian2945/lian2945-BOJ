#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    vector<int> sum;
    int n, m, x, y;
    cin >> n;
    v.resize(n+1);
    sum.resize(n+1);
    v[0]=0;
    sum[0]=0;
    for(int i=1; i<=n; i++){
        cin >> v[i];
        sum[i] = sum[i-1]+v[i];
    }
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> x >> y;
        cout << sum[y]-sum[x-1] << "\n";
    }
    return 0;
}