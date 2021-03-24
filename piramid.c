#include <stdio.h>
int main()
{
    int n,x,i,spc,j;
    int tola[100];
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&tola[i-1]);
        for (x=tola[i-1]-(tola[i-1]-1); x<=tola[i-1]; x++)
        {
            for (spc=tola[i-1]-x; spc>=1; spc--)
            {
                printf(" ");
            }
            for (j=1; j<=x+(x-1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
