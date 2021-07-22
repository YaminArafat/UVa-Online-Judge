#include <stdio.h>
int main()
{
    int tc,i,b,h;
    scanf("%d",&tc);
    for (i=1; i<=tc; i++)
    {
        scanf("%d %d",&b,&h);
        printf("Case %d: %d\n",i,b*h);
    }
    return 0;
}
