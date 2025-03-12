#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        for(int j=0; j<d; j++)
        {
            cout << "=";
        }
        cout << "\n";
    }
    return 0;
}