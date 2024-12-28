#include <iostream>
using namespace std;
int abs(int a)
{
    return a>=0 ? a : -a;
}
int main()
{
    int n, d;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        if(abs(d)%2==0)
        {
            cout << d << " is even\n";
        }
        else
        {
            cout << d << " is odd\n";
        }
    }
    return 0;
}