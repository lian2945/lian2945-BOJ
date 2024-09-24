#include <iostream>
using namespace std;
int main() 
{
    long long n;
    int i=1;
    cin >> n;
    for(i=1;n>=0;i++) {
        n-=i;
    }
    cout << i-2;
    return 0;
}