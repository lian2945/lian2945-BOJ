#include <iostream>
using namespace std;
int main()
{
    int n;
    int d;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> d;
        for(int i=0; i<d; i++) {
            for(int j=0; j<d; j++) {
                if(i==0 || j==0 || i==d-1 || j==d-1) {
                    cout << "#";
                }
                else {
                    cout << "J";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}