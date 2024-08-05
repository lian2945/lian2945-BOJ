#include <stdio.h>
void zerocut(long long& t);

int main(void)
{
    long long index, total=1;
    scanf("%lld", &index);
    for(long long i=1;i<=index;i++)
    {
        total*=i;
        zerocut(total);
        total%=1000000000000;
    }
    printf("%05lld", total%100000);
    return 0;
}

void zerocut(long long& t)
{
    while(t%10==0)
    {
        t/=10;
    }
}