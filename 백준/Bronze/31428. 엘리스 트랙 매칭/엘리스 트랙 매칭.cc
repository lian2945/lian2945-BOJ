#include <iostream>
using namespace std;
int main()
{
    int n;
    char c, s;
    int vec[27] = {0,};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c;
        vec[c-'A']++;
    }
    cin >> s;
    cout << vec[s-'A'];
    return 0;
}