#include <iostream>
using namespace std;
int main()
{
    long long n, s;
    long long t = 0;
    long long tmp = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> s;
        if(s==1) {
            tmp++;
            t+=tmp;
        }
        else {
            tmp--;
            t+=tmp;
        }
    }
    cout << t;
    return 0;
}