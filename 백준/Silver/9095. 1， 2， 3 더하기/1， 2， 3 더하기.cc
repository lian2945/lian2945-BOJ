#include <iostream>
using namespace std;
int memo[20]={1, 2, 4, };

int f(int n)
{
    if(memo[n-1]>0) return memo[n-1];
    return memo[n-1] = f(n-1) + f(n-2) + f(n-3);
}
int main()
{
    int n,d;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        cout << f(d) << "\n";
    }
    return 0;
}