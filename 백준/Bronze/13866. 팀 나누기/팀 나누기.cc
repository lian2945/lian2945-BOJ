#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> n(4);
    for(int i=0; i<4; i++)
    {
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    cout << abs((n[0]+n[3]) - (n[1]+n[2]));
    return 0;
}