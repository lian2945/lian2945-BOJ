#include <iostream>
using namespace std;
int main()
{
    string s;
    bool sa[4] = {false,};
    cin >> s;
    for(const auto& c : s) {
        if(c=='U') sa[0]=true; 
        else if(c=='A') sa[1]=true;
        else if(c=='P') sa[2]=true;
        else if(c=='C') sa[3]=true;
    }
    for(int i=0; i<4; i++)
    {
        if(i == 0 && sa[i] == false) cout << "U";
        if(i == 1 && sa[i] == false) cout << "A";
        if(i == 2 && sa[i] == false) cout << "P";
        if(i == 3 && sa[i] == false) cout << "C";
    }
    return 0;
}