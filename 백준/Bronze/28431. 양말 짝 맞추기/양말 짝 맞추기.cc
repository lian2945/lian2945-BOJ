#include <iostream>
using namespace std;
int main()
{
    int vec[10] = {0,}, d;
    for(int i=0; i<5; i++)
    {
        cin >> d;
        vec[d]++;
    }
    for(int i=0; i<10; i++)
    {
        if(vec[i]%2==1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}