#include <iostream>
using namespace std;
bool isPrime(long long a);
int main(void)
{
    long long M, N;
    cin >> M >> N;
    if(M==1) M=2;
    for(long long i=M;i<=N;i++)
    {
        if(isPrime(i)==true)
        {
            cout << i << "\n";
        }
    }
}

bool isPrime(long long a)
{
    if(a%2==0 && a!=2)
    {
        return false;
    }
    for(int i=3;i*i<=a;i+=2)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}