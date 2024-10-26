#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> arr;
    int a,b,c,s=-1;
    cin >> a >> b;
    c=a;
    arr.resize(a);
    if(a==1)
    {
        cout << "<1>";
        return 0;
    }
    for(int i=1;i<=a;i++)
    {
        arr[i-1]=i;
    }
    for(int i=0;i<a;i++)
    {
        if(i+1==a) cout << arr[(s+b)%c] << ">";
        else if(i==0) cout << "<" << arr[(s+b)%c] << ", ";
        else cout << arr[(s+b)%c] << ", ";
        for(int j=(s+b)%c;j<a;j++)
        {
            arr[j]=arr[j+1];
        }
        s=(s+b)%c-1;
        c--;
    }
    return 0;
}