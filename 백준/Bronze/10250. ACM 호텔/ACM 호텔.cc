#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> d;
    for(int i=0; i<d; i++)
    {
        cin >> a >> b >> c;
        if(c%a!=0) cout << ((c%a)*100)+(c/a+1) << "\n";
        else cout << (a*100)+(c/a) << "\n";
    }
    return 0;
}