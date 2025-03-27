#include <iostream>
using namespace std;
int main()
{
    string s;
    int x = 0, y = 0;
    cin >> s;
    for(const auto& c : s) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            x++;
            y++;
        }
        else if(c=='y') {
            y++;
        }
    }
    cout << x << " " << y;
    return 0;
}