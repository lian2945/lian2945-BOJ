#include <iostream>
using namespace std;

int main() {
    int n, b1, b2;
    cin >> n >> b1 >> b2;
    
    bool inside = false;
    for (int i = 0; i < n; i++) {
        int lx, ly, hx, hy;
        cin >> lx >> ly >> hx >> hy;
        if (b1 >= lx && b1 <= hx && b2 >= ly && b2 <= hy) {
            inside = true;
        }
    }
    
    if (inside) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}