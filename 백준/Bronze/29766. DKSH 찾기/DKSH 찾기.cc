#include <iostream>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for(int i=0; i<s.size()-3; i++) {
        if(s[i]=='D' && s[i+1]=='K' && s[i+2]=='S' && s[i+3]=='H') cnt++;
    }
    cout << cnt;
    return 0;
}