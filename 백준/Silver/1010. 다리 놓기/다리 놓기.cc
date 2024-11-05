#include <iostream>
using namespace std;

int map[31][31];

int nCr(int n, int m) {
    if(n==0) return 1;
    if(n==m) return 1;
    if(map[n][m]!=0) return map[n][m];
    return map[n][m] = nCr(n, m-1) + nCr(n-1, m-1);
}
int main()
{
    int n;
    int a,b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        cout << nCr(a, b) << "\n";
    }
    return 0;
}