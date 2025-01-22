#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    for(int i=a; i<=b; i+=60) {
        cout << "All positions change in year " << i << "\n";
    }
    return 0;
}