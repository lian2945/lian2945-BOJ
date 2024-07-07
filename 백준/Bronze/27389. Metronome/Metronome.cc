#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", n/4);
    if(n%4==0)
    {
        printf(".0");
    }
    else if(n%4==1)
    {
        printf(".25");
    }
    else if(n%4==2)
    {
        printf(".5");
    }
    else
    {
        printf(".75");
    }
    return 0;
}