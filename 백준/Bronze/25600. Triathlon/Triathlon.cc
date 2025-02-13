#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, m = 0, t;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(b+c==a) {
            t = (b+c)*a*2;
        }
        else {
            t = (b+c)*a;
        }
        if(m<t) {
            m = t;
        }
    }
    cout << m;
    return 0;
}