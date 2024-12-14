#include <stdio.h>
int main()
{
    int n, a=0, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &b);
        a+=b&1;
    }
    printf("%s", a<n-a ? "Happy" : "Sad");
    return 0;
}