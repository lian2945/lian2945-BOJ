#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, t1, t2;
    cin >> a >> b >> c;
    if(a%c == 0) {
        t1 = a/c;
    }
    else {
        t1 = a/c+1;
    }
    if(b%c == 0) {
        t2 = b/c;
    }
    else {
        t2 = b/c+1;
    }
    cout << t1*t2;
    return 0;
}