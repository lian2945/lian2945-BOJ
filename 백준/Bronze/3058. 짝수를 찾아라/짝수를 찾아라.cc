#include <iostream>
using namespace std;
int main()
{
    int n, t=0, m=99999999, a;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        t=0;
        m=99999999;
        for(int j=0;j<7;j++)
        {
            cin >> a;
            if(a%2==0)
            {
                t+=a;
                if(m>a)
                {
                    m=a;
                }
            }
        }
        cout << t << " " << m << "\n";
    }
    return 0;
}