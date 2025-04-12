#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> src, sum;
    int n, m;
    cin >> n >> m;
    src.resize(n);
    sum.resize(n);
    cin >> src[0];
    sum[0] = src[0];
    for(int i=1; i<n; i++)
    {
        cin >> src[i];
        sum[i] = sum[i-1] + src[i];
    }
    int max = sum[0+m-1];
    for(int i=1; i<=n-m; i++)
    {
        if(max < sum[i+m-1]-sum[i-1]) max = sum[i+m-1]-sum[i-1];
    }
    cout << max;
    return 0;
}