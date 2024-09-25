#include <iostream>
using namespace std;
int num_of_size(int n) {
    int cnt=1;
    while(n) {
        n/=10;
        cnt*=10;
    }
    return cnt;
}

int main() {
    int n, d;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> d;
        if(d*d%num_of_size(d)==d) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}