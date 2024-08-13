#include <iostream>
using namespace std;
int d(int n)
{
    if(n<10) return n;
    int t=0;
    while(n>0)
    {
        t+=n%10;
        n/=10;
    }
    return d(t);
}
int main()
{
    int n=1;
    while(n!=0)
    {
        cin >> n;
        if(n!=0) cout << d(n) << "\n";
    }
    return 0;
}