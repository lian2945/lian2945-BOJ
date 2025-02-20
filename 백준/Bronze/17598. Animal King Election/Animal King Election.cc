#include <iostream>
using namespace std;
int main()
{
    string d;
    int t = 0, l = 0;
    for(int i = 0; i < 9; i++) {
        cin >> d;
        if(d=="Tiger") {
            t++;
        }
        else {
            l++;
        }
    }
    if(t>l) cout << "Tiger";
    else cout << "Lion";
    return 0;
}