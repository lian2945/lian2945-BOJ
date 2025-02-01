// J を O に，O を I に，I を J
#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(const auto& c : s)
    {
        if(c=='J') cout << "O";
        else if(c=='O') cout << "I";
        else cout << "J";
    }
    return 0;
}