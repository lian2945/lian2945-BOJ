#include <iostream>
#include <cmath>
using namespace std;
void Hanoi(int am, int st, int mid, int end)
{
    if(am==0) return;
    Hanoi(am-1, st, end, mid);
    cout << "\n" << st << " " << end;
    Hanoi(am-1, mid, st, end);
}
int main()
{
    int n;
    cin >> n;
    cout << int(pow(2, n))-1;
    Hanoi(n, 1, 2, 3);
    return 0;
}