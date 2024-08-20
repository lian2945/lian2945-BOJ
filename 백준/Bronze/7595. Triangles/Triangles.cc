#include <iostream>
using namespace std;
int main(void) {
    int n=1;
    while(n!=0) {
        cin >> n;
        if(n==0) break;
        for(int i=0;i<n;i++) {
            for(int j=i;j>=0;j--) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    return 0;
}