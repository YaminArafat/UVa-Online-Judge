#include <stdio.h>
int main()
{
    int n,x,i,p;
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);

        if (x>=0 && x<10000001)
        {
              if (x==0)
            {
                printf("%d\n",a);
            }
            if (x>0 && x <10)
            {
                printf("%d\n",a);
            }
            if (x>=10 && x <100)
            {
                printf("%d\n",b);
            }
            if (x>=100 && x <1000)
            {
                printf("%d\n",c);
            }
            if (x>=1000 && x <10000)
            {
                printf("%d\n",d);
            }
            if (x>=10000 && x <100000)
            {
                printf("%d\n",e);
            }
            if (x>=100000 && x <1000000)
            {
                printf("%d\n",f);
            }
            if (x>=1000000 && x <10000000)
            {
                printf("%d\n",g);
            }
            if (x>=10000000 && x <10000001)
            {
                printf("%d\n",h);
            }

        }
    }
    return 0;
}
