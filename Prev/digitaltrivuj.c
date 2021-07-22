#include <stdio.h>
int main()
{
    int tc,i,j,k,d,h;
    scanf("%d",&tc);
    for (i=1; i<=tc; i++)
    {
        scanf("%d %d",&d,&h);
        printf("Case %d: \n",i);
        for (j=1; j<=h; j++)
        {
            for (k=1; k<=j; k++)
            {
                printf("%d",d);
            }
            printf("\n");
        }
    }
    return 0;
}
