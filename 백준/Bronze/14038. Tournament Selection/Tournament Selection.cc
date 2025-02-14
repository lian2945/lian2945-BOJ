#include <iostream>
using namespace std;
int main()
{
    char t;
    int k = 0;
    for(int i = 0; i < 6; i++) {
        cin >> t;
        if(t=='W') k++; 
    }
    if(k==0) cout << -1;
    else if(k<=2) cout << 3;
    else if(k<=4) cout << 2;
    else if(k<=6) cout << 1;
    return 0;
}