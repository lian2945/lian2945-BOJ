#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,1,2,2,2,8};
    int d;
    for(int i=0;i<6;i++)
    {
        scanf("%d", &d);
        printf("%d ", arr[i]-d);
    }
    return 0;
}