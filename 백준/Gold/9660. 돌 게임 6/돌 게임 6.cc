#include <stdio.h>
int main(void)
{
    unsigned long long n;
    scanf("%lld", &n);
    if(n%7==2||n%7==0) printf("CY");
    else printf("SK");
    return 0;
}
//1 SK
//2 CY
//3 SK
//4 SK
//5 SK
//6 SK
//7 CY
//8 SK
//9 CY
//10 SK
//11 SK
//12 SK
//13 SK
//14 CY
//15 SK
//16 CY