#include <iostream>
using namespace std;
int main() {
    int d[10]={0,};
    string arr;
    cin >> arr;
    for(auto i : arr)
    {
        d[i-'0']++;
    }
    for(int i=9;i>=0;i--) {
        for(int k=0;k<d[i];k++) {
            cout << i;
        }
    }
    return 0;
}