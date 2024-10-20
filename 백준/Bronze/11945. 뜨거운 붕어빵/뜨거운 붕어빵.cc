#include <iostream>
using namespace std;
int main()
{
    int n, m;
    string str;
    int arr[10][10];
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> str;
        for(int j=0;j<m;j++)
        {
            arr[i][j] = str[j]-'0';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}