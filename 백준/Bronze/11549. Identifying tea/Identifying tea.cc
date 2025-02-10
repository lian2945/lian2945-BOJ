#include <iostream>
using namespace std;
int main()
{
    int n, d, cnt = 0;
    cin >> n;
    for(int i=0; i<5; i++)
    {
        cin >> d;
        if(n==d) cnt++;
    }
    cout << cnt;
    return 0;
}