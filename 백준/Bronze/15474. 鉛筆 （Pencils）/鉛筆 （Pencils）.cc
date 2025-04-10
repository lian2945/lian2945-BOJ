#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d, ob, od;
    cin >> n >> a >> ob >> c >> od;
    b=ob;
    d=od;
    for(int i=1; n>a*i; i++) {
        b+=ob;
    }
    for(int i=1; n>c*i; i++) {
        d+=od;
    }
    if(b>=d) cout << d;
    else cout << b;
    return 0;
}