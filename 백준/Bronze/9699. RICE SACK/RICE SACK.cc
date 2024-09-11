#include <iostream>
using namespace std;
int main()
{
    int n;
    int max=0;
    int d;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        max=0;
        for(int j=0;j<5;j++)
        {
            cin >> d;
            if(max<d)
            {
                max=d;
            }
        }
        cout << "Case #" << i+1 << ": " << max << "\n";
    }
    return 0;
}