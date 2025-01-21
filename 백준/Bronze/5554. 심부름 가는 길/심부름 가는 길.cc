#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int d;
    for(int i=0; i<4; i++)
    {
        cin >> d;
        total+=d;
    }
    cout << total/60 << "\n" << total%60;
    return 0;
}