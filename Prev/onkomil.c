#include <stdio.h>
int main()
{
    int i,j,x,y,n,p,q,z;

    scanf("%d" , &n);

    for (i=1;i<=n;i++)
    {
        scanf("%d %d" , &x , &y);

        for (x=10;x<=99;x++)
        {
            for (y=99;y>=10;y--)

                if (x==y)
                {
                    //p=x;
                    //p=y;
                    printf("%d\n" , x);
                    break;
                }
        }
    }
    return 0;
}
