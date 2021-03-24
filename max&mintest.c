#include <stdio.h>

int main()
{
    int i,n,max,min;
    int a,b,c,d,e;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
        if (a&&b&&c&&d&&e<=100)
        {
            if (a>b&&c&&d&&e)
            {
                max=a;
            }
            if (b>a&&c&&d&&e)
            {
                max=b;
            }
            if (c>a&&b&&d&&e)
            {
                max=c;
            }
            if (d>a&&b&&c&&e)
            {
                max=d;
            }
            if (e>a&&b&&c&&d)
            {
                max=e;
            }

            if (max!=a && a<b&&c&&d&&e)
            {
                min=a;
            }
            if (max!=b && b<a&&c&&d&&e)
            {
                min=b;
            }
            if (max!=c && c<a&&b&&d&&e)
            {
                min=c;
            }
            if (max!=d && d<a&&b&&c&&e)
            {
                min=d;
            }
            if (max!=e && e<a&&b&&c&&d)
            {
                min=e;
            }
        }
        printf("%d %d\n",max,min);

    }
    return 0;
}
