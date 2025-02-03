#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,m=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        if(m<a*b) m = a*b;
    }
    cout << m;
    return 0;
}