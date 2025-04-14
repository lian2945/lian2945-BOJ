#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a*c)%(b*d*2)==0) cout << 1;
    else cout << 0;
    return 0;
}