#include <iostream>
using namespace std;

long long memo[116]={1,1,1};

long long f(int n)
{
    if(memo[n]!=0) return memo[n];
    return memo[n] = f(n-3)+f(n-1);
}

int main()
{
    long long n;
    cin >> n;
    cout << f(n-1);
    return 0;
}