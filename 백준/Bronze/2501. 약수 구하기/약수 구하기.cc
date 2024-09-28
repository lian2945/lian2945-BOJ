#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> yaksoo;
void ys(int n) {
    int i=1;
    for(i=1;i*i<n;i++) {
        if(n%i==0) {
            yaksoo.push_back(i);
            yaksoo.push_back(n/i);
        }
    }
    if(i*i==n) yaksoo.push_back(i);
}

int main() {
    int n, d;
    cin >> n >> d;
    ys(n);
    sort(yaksoo.begin(), yaksoo.end());
    if(yaksoo.size()<d) cout << 0;
    else cout << yaksoo[d-1];
    return 0;
}