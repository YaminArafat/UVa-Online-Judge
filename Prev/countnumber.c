#include <stdio.h>

int main()
{
    int x[15][15];
    int y,a,b,i,j,n,z;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&x[i-1]);
        //n=2*n;
        for (j=1;j<=n;j++)
        {
            scanf("%d",&x[j-1]);
        }

    }


    getch();
}
