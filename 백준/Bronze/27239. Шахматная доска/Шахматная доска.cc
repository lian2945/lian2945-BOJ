#include <iostream>
using namespace std;
int main()
{
    int d;
    int n[] = {1,2,3,4,5,6,7,8};
    char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    cin >> d;
    cout << s[(d-1)%8] << n[(d-1)/8];
    return 0;
}