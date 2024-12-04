#include <iostream>
using namespace std;
int main()
{
    int n, d, t=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> d;
        if(d%2==1) t++;
    }
    cout << t;
    return 0;
}