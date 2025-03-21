#include <iostream>
using namespace std;
int main()
{
    int n;
    int y=2024, m=8;
    cin >> n;
    m+=(n-1)*7;
    if(m%12==0) {
        cout << y+(m/12)-1 << " " << 12;
    }
    else cout << y+(m/12) << " " << (m%12);
    return 0;
}