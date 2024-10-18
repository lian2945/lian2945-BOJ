#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long t=6;
    cin >> n;
    for(int i=11;i<=n;i++)
    {
        t*=i;
    }
    cout << t;
    return 0;
}