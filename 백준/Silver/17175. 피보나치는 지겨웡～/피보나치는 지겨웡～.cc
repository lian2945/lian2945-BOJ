#include <iostream>
using namespace std;
int memo[51]={1,1,};

int main() {
    int n;
    cin >> n;
    for(int i=2; i<=n; i++) {
        memo[i] = (memo[i-1] + memo[i-2] + 1) % 1000000007;
    }
    cout << memo[n];
    return 0;
}