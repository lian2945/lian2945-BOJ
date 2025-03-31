#include <iostream>
using namespace std;
int main()
{
    int n, a=0, b=0;
    string m;
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++)
    {
        if(m[i]=='0'||m[i]=='2'||m[i]=='4'||m[i]=='6'||m[i]=='8') a++;
        else b++;
    }
    if(a<b) cout << 1;
    else if(a>b) cout << 0;
    else cout << -1;
    return 0;
}