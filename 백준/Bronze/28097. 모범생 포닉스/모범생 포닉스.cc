#include <iostream>
using namespace std;
int main()
{
    int n, d, t = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        t+=d;
    }
    t+=8*(n-1);
    cout << t/24 << " " << t % 24;
    return 0;
}