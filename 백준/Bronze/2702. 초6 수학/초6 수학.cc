#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int n, a, b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        cout << lcm(a,b) << " " << gcd(a,b) << "\n";
    }
    return 0;
}