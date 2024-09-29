#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<3;i++) {
        cin >> t;
        a.push_back(t);
    }
    for(int i=0;i<2;i++) {
        cin >> t;
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << a[0]+b[0]-50;
    return 0;
}