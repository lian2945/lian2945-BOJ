#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(n/2 > m/2)
    {
        cout << m/2;
    }
    else
    {
        cout << n/2;
    }
    return 0;
}