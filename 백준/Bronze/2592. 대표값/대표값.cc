#include <iostream>
using namespace std;
int main()
{
    int n, t=0, m=0, mi;
    int arr[1001]={0,};
    for(int i=0;i<10;i++)
    {
        cin >> n;
        arr[n]++;
        t+=n;
    }
    for(int i=10;i<=1000;i+=10)
    {
        if(m<arr[i])
        {
            m=arr[i];
            mi=i;
        }
    }
    cout << t/10 << "\n" << mi;
    return 0;
}