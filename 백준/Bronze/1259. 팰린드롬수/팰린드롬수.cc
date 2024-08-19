#include <iostream>
#include <stack>
using namespace std;
bool Palendrome(int n)
{
    stack<int> ost;
    stack<int> nst;
    int sizeofnum = 0;
    while (n>0)
    {
        sizeofnum++;
        ost.push(n % 10);
        n /= 10;
    }
    for (int i = 0;i < sizeofnum / 2;i++)
    {
        nst.push(ost.top());
        ost.pop();
    }
    if (sizeofnum % 2 == 1) ost.pop();
    if (nst == ost) return true;
    return false;
}

int main(void)
{
    int n=1;
    while(n!=0)
    {
        cin >> n;
        if(n!=0&&Palendrome(n)) cout << "yes\n";
        else if(n!=0) cout << "no\n";
    }
    return 0;
}