#include <iostream>
using namespace std;
int memo[41];
int main()
{
    memo[0]=0;
    memo[1]=1;
    int n, d;
    for(int i=2; i<=40; i++)
    {
        memo[i] = memo[i-1] + memo[i-2];
    }
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> d;
        if(d==0) {
            cout << "1 0\n";
            continue;
        }
        cout << memo[d-1] << " " << memo[d] << "\n";
    }
    return 0;
}