#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int k = 1; k * (k - 1) / 2 < n; k++) {
        if ((n - k * (k - 1) / 2) % k == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}