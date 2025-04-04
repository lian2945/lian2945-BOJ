#include <iostream>
using namespace std;
int main()
{
    int t = 0, a;
    for(int i=0; i<10; i++)
    {
        cin >> a;
        t+=a;
    }
    cout << t/2;
    return 0;
}