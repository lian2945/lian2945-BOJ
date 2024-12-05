#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string str;
    int n;
    stack<int> st;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> str;
        if(str=="top") {
            if(st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << st.top() << "\n";
            }
        }
        else if(str=="empty") {
            cout << st.empty() << "\n";
        }
        else if(str=="pop") {
            if(st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if(str=="size") {
            cout << st.size() << "\n";
        }
        else if(str=="push") {
            i--;
        }
        else {
            int t=0;
            for(int i=0; i<str.size(); i++) {
                t*=10;
                t+=str[i]-'0';
            }
            st.push(t);
        }
    }
    return 0;
}