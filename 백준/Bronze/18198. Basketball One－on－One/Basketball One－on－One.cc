#include <iostream>
using namespace std;
int main()
{
    string s;
    int a=0, b=0;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'A') a++;
        if(s[i] == 'B') b++;
    }
    if(a>b) cout << 'A';
    else cout << 'B';
    return 0;
}