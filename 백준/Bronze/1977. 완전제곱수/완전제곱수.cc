#include <iostream>
using namespace std;
int main(void)
{
    int a,b;
    int t=0, k;
    bool l=false;
    cin >> a >> b;
    for(int i=1;i*i<=b;i++)
    {
        if(i*i>=a && !l)
        {
            k=i*i;
            l=true;
            t+=i*i;
        }
        else if(i*i>=a) t+=i*i;
    }
    if(t!=0) cout << t << "\n" << k;
    else cout << -1;
    return 0;
}