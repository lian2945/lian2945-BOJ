#include <iostream>
using namespace std;
int main()
{
    int n, m, t=0;
    cin >> n;
    cin >> m;
    if(n>m) t+=500;
    t+=n*50;
    t-=m*10;
    cout << t;
    return 0;
}