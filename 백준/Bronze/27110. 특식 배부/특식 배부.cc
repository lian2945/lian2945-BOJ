#include <iostream>
using namespace std;
int main()
{
    int n, t = 0;
    int a[3];
    cin >> n;
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
        if(a[i] > n)
        {
            t+=n;
        }
        else
        {
            t+=a[i];
        }
    }
    cout << t;
    return 0;
}