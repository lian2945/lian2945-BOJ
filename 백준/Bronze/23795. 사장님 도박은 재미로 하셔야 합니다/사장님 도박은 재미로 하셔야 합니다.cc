#include <iostream>
using namespace std;
int main()
{
    int n, t = 0;
    cin >> n;
    t+=n;
    while(n!=-1)
    {
        cin >> n;
        t+=n;
    }
    cout << t+1;
    return 0;
}