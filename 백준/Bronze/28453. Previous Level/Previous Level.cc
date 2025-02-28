#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> d;
        if(d<250) {
            cout << "4 ";
        }
        else if(d<275) {
            cout << "3 ";
        }
        else if(d<300) {
            cout << "2 ";
        }
        else {
            cout << "1 ";
        }
    }
    return 0;
}