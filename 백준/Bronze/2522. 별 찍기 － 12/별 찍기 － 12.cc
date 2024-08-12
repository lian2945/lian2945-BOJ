#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<abs(i-n+1);j++)
        {
            cout << " ";
        }
        for(int k=0;k<n-abs(i-n+1);k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}