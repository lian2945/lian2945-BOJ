#include <stdio.h>
long long int n[91] = {0, 1, };
long long int f(long long int a)
{
    if(a<2)
    {
        return a;
    }
    else if(n[a]==0)
    {
        n[a]=f(a-1)+f(a-2);
    }
    return n[a];
}
int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%lld",f(a));
}