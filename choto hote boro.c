#include <stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a>b && b>c)
        {
            printf("Case %d: %d %d %d\n",i,c,b,a);
        }
        if (b>a && a>c)
        {
            printf("Case %d: %d %d %d\n",i,c,a,b);
        }
        if (c>a && a>b)
        {
            printf("Case %d: %d %d %d\n",i,b,a,c);
        }
        if (a>c && c>b)
        {
            printf("Case %d: %d %d %d\n",i,b,c,a);
        }
        if (b>c && c>a)
        {
            printf("Case %d: %d %d %d\n",i,a,c,b);
        }
        if (c>b && b>a)
        {
            printf("Case %d: %d %d %d\n",i,a,b,c);
        }
    }
    return 0;
}
