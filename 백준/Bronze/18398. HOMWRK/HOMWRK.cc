#include <iostream>
using namespace std;
int main()
{
    int n, d, a, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        for(int j=0; j<d; j++)
        {
            cin >> a >> b;
            cout << a+b << " "  << a*b << "\n";
        }
    }
    return 0;
}