#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if(a%b==0) return b;
    return gcd(b, a%b);
}
int main(void)
{
    long long a,b;
    cin >> a >> b;
    for(int i=0;i<gcd(a,b);i++)
    {
        cout << 1;
    }
    return 0;
}