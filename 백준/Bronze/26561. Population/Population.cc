#include <iostream>
using namespace std;
int main()
{
    int n, d, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> d >> a;
        d += (a/4 - a/7);
        cout << d << "\n";
    }
    return 0;
}