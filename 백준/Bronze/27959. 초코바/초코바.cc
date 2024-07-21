#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%s", a*100>=b?"Yes":"No");
    return 0;
}