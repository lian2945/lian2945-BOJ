#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, t=0;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    if(a<d) t+=d-a;
    if(b<e) t+=e-b;
    if(c<f) t+=f-c;
    cout << t;
    return 0;
}