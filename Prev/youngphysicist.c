#include <stdio.h>
int main()
{
    int tc,i,x,y,z,x_sum=0,y_sum=0,z_sum=0;
    scanf("%d",&tc);
    for (i=1; i<=tc; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if (i)
        {
            x_sum=x_sum+x;
        }
        if (i)
        {
            y_sum=y_sum+y;
        }
        if (i)
        {
            z_sum=z_sum+z;
        }
    }
    if (x_sum==0 && y_sum==0 && z_sum==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
