#include <iostream>
using namespace std;
int main(void)
{
    long long N, M, S, total=1;
    cin >> N >> M;
    if(N>=M)
    {
        cout << 0;
    }
    else
    {
        S=N/M+1;
        for(int i=S;i<=N;i++)
        {
            total*=i;
            total%=M;
        }
        cout << total%M;
    }
}