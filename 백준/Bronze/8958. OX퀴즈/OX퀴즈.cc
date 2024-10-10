#include <iostream>
using namespace std;
int main()
{
    int n, t=0, s=0;
    string str;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str;
        t=0;
        s=0;
        for(auto c : str)
        {
            if(c=='O')
            {
                s++;
                t+=s;
            }
            else
            {
                s=0;
            }
        }
        cout << t << "\n";
    }
    return 0;
}