#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if((m-n) % k == 0) {
        cout << (m-n)/k;    
    } 
    else {
        cout << (m-n)/k + 1;
    }
    return 0;
}