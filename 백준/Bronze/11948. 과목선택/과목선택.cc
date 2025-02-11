#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    int res = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if(a<=b && a<=c && a<=d)
    {
        res = b+c+d;
    }
    else if(b<=a && b<=c && b<=d)
    {
        res = a+c+d;
    }
    else if(c<=a && c<=b && c<=d)
    {
        res = a+b+d;
    }
    else
    {
        res = a+b+c;
    }
    if(e<f)
    {
        res+=f;
    }
    else
    {
        res+=e;
    }
    cout << res;
    return 0;
}