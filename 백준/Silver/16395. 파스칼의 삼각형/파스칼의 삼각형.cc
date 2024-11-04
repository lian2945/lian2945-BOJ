#include <iostream>
using namespace std;
int f(int a, int b) {
    if(b==a) return 1;
    if(b==0) return 1;
    return f(a-1, b-1) + f(a-1, b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << f(n-1, m-1);
    return 0;
}