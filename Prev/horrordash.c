#include <stdio.h>
int main()
{
    int n,i,max,j,k,x[9999],y;
    scanf("%d",&y);
    for (i=1; i<=y; i++)
    {
        max=0;
        scanf("%d",&n);
        for (k=0; k<n; k++)
        {
            scanf("%d",&x[k]);
            if (max<x[k])
            {
                max=x[k];
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
