#include <iostream>
using namespace std;
int main() {
    long long n,a=0,b=1,tmp;
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        tmp=b;
        b+=a;
        a=tmp;
    }
    cout << a;
    return 0;
}