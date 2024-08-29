#include <iostream>
using namespace std;
int main() {
    int a=0, t=0;
    cin >> a;
    for(int i=1;i<=a;i++) {
        t+=i;
    }
    cout << t << "\n" << t*t << "\n" << t*t;
    return 0;
}