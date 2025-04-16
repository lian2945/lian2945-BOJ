#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
        else if(s[i] >= 'a' && s[i] <= 'z') s[i]-=32;
        cout << s[i];
    }
    return 0;
}