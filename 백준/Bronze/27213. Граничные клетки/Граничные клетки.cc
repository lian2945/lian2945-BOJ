#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(m==1 && n==1) {
        cout << 1;
    }
    else if(m==1) {
        cout << n;
    }
    else if(n==1) {
        cout << m;
    }
    else {
        cout << (n*2) + (m*2) - 4;
    }
    return 0;
}