#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b==c && a==c)
    {
        cout << 2;
    }
    else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}