#include <iostream>
using namespace std;
int main()
{
    int a, b, c, t=0;
    cin >> a >> b >> c;
    while(b!=c) {
        b++;
        t++;
        if(b==a+1) b = 1;
    }
    cout << t;
    return 0;
}