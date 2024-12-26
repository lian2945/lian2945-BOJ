#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a==1 && b==1 && c==1) || (a==0&&b==0&&c==0))
    {
        cout << "*";
    }
    else if(a==1 && b==1)
    {
        cout << "C";
    }
    else if(b==1 && c==1)
    {
        cout << "A";
    }
    else if(a==1 && c==1)
    {
        cout << "B";
    }
    else if(a==0&&b==0)
    {
        cout << "C";   
    }
    else if(b==0 &&c==0)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
    }
    return 0;
}