#include <stdio.h>
int main()
{
    int n, m, om;
    scanf("%d", &n);
    scanf("%d", &m);
    om = m;
    
    while(m>0) {
        printf("%d\n", n*(m%10));
        m/=10;
    }
    printf("%d", n*om);
    return 0;
}