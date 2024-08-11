#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int max=0;
    int xi, yi;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cin >> arr[i][j];
            if(max<=arr[i][j])
            {
                max=arr[i][j];
                yi=i;
                xi=j;
            }
       }
    }
    cout << max << "\n";
    cout << yi << " " << xi;
    return 0;
}