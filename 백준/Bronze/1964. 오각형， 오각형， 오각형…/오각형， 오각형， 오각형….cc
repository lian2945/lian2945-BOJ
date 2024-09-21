#include <iostream>
using namespace std;
int main() {
    int n;
    int t=5;
    int a;
    cin >> n;
    if(n>1) {
        a=4;
    }
    for(int i=0;i<n-1;i++) {
        a+=3;
        t+=a;
        t%=45678;
    }
    cout << t;
    return 0;
}