#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int a, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s >> a >> b;
        for(int i=0; i<s.size(); i++) {
            if(i>=a && i<b) {
                continue;
            }
            cout << s[i];
        }
        cout << "\n";
    }    
    return 0;
}