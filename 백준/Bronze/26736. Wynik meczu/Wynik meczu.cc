#include <iostream>
using namespace std;
int main()
{
    string s;
    int a = 0, b = 0;
    cin >> s;
    for(const auto c : s)
    {
        if(c=='A') a++;
        else b++;
    }
    cout << a << " : " << b;
    return 0;
}