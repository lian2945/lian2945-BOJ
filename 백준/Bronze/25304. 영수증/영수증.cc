#include <iostream>
using namespace std;
int main()
{
    long long n;
    int k;
    int a,b;
    cin >> n;
    cin >> k;
    for(int i=0;i<k;i++) {
        cin >> a >> b;
        n-=b*a;
    }
    if(n==0) cout << "Yes";
    else cout << "No";
    return 0;
}