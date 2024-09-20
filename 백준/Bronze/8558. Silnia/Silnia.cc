#include <iostream>
using namespace std;
int main() {
    int n;
    int t=1;
    cin >> n;
    for(int i=1;i<=n;i++) {
        t*=i;
        t%=10;
    }
    cout << t;
    return 0;
}