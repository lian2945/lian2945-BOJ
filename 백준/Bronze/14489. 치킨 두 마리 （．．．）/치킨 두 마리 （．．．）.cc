#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin >> a >> b;
    cin >> n;
    if(a+b>=2*n)
    {
        cout << a-n+b-n;
    }
    else
    {
        cout << a+b;
    }
    return 0;
}