#include <stdio.h>

int main()
{
    int x,y,z[100],p,n,a=0,b=0;

    scanf("%d",&x);

    for (y=1;y<=x;y++)
    {
        scanf("%d",&z[y]);
        //printf("%d\n",z[y]);

       if (z>0)
       {
       a=a+1;
       if (z<0)
        {
       b=b+1;
       printf("%d %d",a,b);
       }
       }
    }
getch();
}
