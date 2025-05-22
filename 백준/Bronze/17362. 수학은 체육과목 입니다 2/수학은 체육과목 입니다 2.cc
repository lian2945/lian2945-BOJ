#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if((n/4)%2==0 && n%4==0) cout << 2;
    else if((n/4)%2==0) cout << n%4;
    else if(n%4==0) cout << 4;
    else cout << 6 - n%4;
    return 0;
}