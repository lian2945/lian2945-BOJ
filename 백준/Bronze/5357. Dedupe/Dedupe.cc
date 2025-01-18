#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        auto c = '0';
        for(const char& l : s)
        {
            if(l!=c) cout << l;
            c = l;
        }
        cout << "\n";
    }

    return 0;
}