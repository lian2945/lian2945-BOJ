#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    string str;
    int n;
    queue<int> q;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> str;
        if(str=="front") {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
            }
        }
        else if(str=="back") {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.back() << "\n";
            }
        }
        else if(str=="empty") {
            cout << q.empty() << "\n";
        }
        else if(str=="pop") {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(str=="size") {
            cout << q.size() << "\n";
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
            q.push(t);
        }
    }
    return 0;
}