#include <iostream>
using namespace std;
int main()
{
    int n=1;
    int t;
    while(n)
    {
        cin >> n;
        t=0;
        if(!n) break;
        for(int i=1;i<=n;i++)
        {
            t+=i;
        }
        cout << t << "\n";
    }
    return 0;
}