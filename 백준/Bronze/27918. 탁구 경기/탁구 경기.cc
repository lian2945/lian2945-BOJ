#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    int d = 0, p = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> c;
        if(c=='D') d++;
        else p++;
        if(abs(d-p)>=2) break;
    }
    cout << d << ":" << p;
    return 0;
}