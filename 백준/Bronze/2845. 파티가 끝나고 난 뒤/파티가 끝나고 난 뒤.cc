#include <iostream>
using namespace std;
int main()
{
    int n, m, d;
    int t=0;
    cin >> n >> m;
    t=n*m;
    for(int i=0;i<5;i++)
    {
        cin >> d;
        cout << d-t << " ";
    }
    return 0;
}