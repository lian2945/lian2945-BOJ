#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    cin >> s1;
    for(int i=0; i<s.size(); i++) {
        if(s[i] > s1[i]) cout << s[i];
        else cout << s1[i];
    }
    return 0;
}