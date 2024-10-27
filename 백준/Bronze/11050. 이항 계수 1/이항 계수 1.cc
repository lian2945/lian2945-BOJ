#include <iostream>
using namespace std;

int p(int a, int b)
{
    if(b==0 || b==a) return 1;
    return p(a-1, b)+p(a-1, b-1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << p(a,b);
    return 0;
}