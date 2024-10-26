#include <iostream>
using namespace std;
int main()
{
    int a=1, b=1, c=1;
    while(!(a==0&&b==0&&c==0))
    {
        cin >> a >> b >> c;
        if(a==0&&b==0&&c==0) return 0;
        if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}