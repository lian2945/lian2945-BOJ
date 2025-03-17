#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int t = 0;
    cin >> n >> m;
    for(int i = n+m; i > 0; i/=10) {
        t++;
    }
    cout << t;
    return 0;
}