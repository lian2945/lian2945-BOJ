#include <iostream>
using namespace std;

int count(long long n) {
    int cnt=0;
    while(n) {
        n/=10;
        cnt++;
    }
    return cnt;
}

int main() {
    long long n;
    long long res;
    long long temp=1;
    long long te=1;
    cin >> n;
    int t = count(n);
    for(int i=1;i<t;i++) {
        temp*=10;
    }
    res = (n-temp+1)*t;
    for(int i=1;i<t;i++) {
        res+=te*9*i;
        te*=10;
    }
    cout << res;
    return 0;
}