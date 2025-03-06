#include <iostream>
using namespace std;
int main()
{
    int n, m, o = 0, x = 0, t = 0;
    char c;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> c;
            if(c=='O') o++;
            else x++;
        }
        if(o>x) t++;
        o = 0;
        x = 0;
    }
    cout << t;
    return 0;
}