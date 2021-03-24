#include <stdio.h>

int main()
{
    int i,n,max,min;
    int a,b,c,d,e;
    scanf("%d" , &n);

    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

        if ((a && b && c && d && e)<100)
            {

            if(a>(b && c && d && e))
            {
                 max=a;
            }
            else if (a<(b && c && d && e))
            {
                 min=a;
            }

            if(b>(a && c && d && e))
            {
                 max=b;
            }
            else if (b<(a && c && d && e))
            {
                 min=b;
            }

            if(c>(b && a && d && e))
            {
                 max=c;
            }
            else if (c<(b && a && d && e))
            {
                 min=c;
            }

            if(d>(b && c && a && e))
            {
                 max=d;
            }
            else if (d<(b && c && a && e))
            {
                 min=d;
            }

            if(e>(b && c && d && a))
            {
                 max=e;
            }
            else if (e<(b && c && d && a))
            {
                 min=e;
            }

            printf("%d %d",max,min);
            //break;
            }
            //break;

    }
    return 0;
}
