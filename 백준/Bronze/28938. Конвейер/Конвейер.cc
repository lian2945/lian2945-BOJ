#include <stdio.h>
int main()
{
    int n, t, g=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &t);
        g+=t;
    }
    if(g==0) printf("Stay");
    else if(g>0) printf("Right");
    else printf("Left");
    return 0;
}