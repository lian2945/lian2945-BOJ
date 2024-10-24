#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> st;
    int n;
    string str;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str;
        for(int i=0; i<str.size(); i++)
        {
            if(st.empty() || st.top()==str[i]) st.push(str[i]);
            else if(st.top()=='(') st.pop();
        }
        if(st.empty()) cout << "YES\n";
        else cout << "NO\n";
        while(!st.empty()) st.pop();
    }
    return 0;
}