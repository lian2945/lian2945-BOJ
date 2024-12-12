#include <iostream>
using namespace std;
int main()
{
    string str;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> str;
        if(str == "Algorithm") cout << 204;
        else if(str=="DataAnalysis") cout << 207;
        else if(str=="ArtificialIntelligence") cout << 302;
        else if(str=="CyberSecurity") cout << "B101";
        else if(str=="Network") cout << 303;
        else if(str=="Startup") cout << 501;
        else cout << 105;
        cout << "\n";
    }
    return 0;
}