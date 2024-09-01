#include <iostream>
using namespace std;
int main() {
    int min=99999999, d, t=0;
    for(int i=0;i<7;i++) {
        cin >> d;
        if(d&1 && d<min) min=d;
        if(d&1) t+=d;
    }
    if(t>0) cout << t << "\n" << min;
    else cout << -1;
    return 0;
}