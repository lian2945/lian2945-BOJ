#include <iostream>
using namespace std;
int main()
{
    int n, t = 0;
    string s;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s=="Poblano") t += 1500;
        else if(s=="Mirasol") t+=6000;
        else if(s=="Serrano") t+= 15500;
        else if(s=="Cayenne") t+=40000;
        else if(s=="Thai") t+=75000;
        else t+=125000;
    }
    cout << t;
    return 0;
}