#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a%b==0) return b;
    return gcd(b, a%b);
}
int main()
{
    int n, a, b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        cout << gcd(a,b) << "\n";
    }
    return 0;
}