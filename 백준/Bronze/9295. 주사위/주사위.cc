#include <iostream>
using namespace std;
int main(void)
{
    int n, a, b;
    int k[1000];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        k[i+1]=a+b;
    }
    for(int i=1;i<=n;i++)
    {
        cout << "Case " << i << ": " << k[i] << "\n";
    }
    return 0;
}