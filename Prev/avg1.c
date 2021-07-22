#include <stdio.h>
int main()
{
    int i,n,avg,sum,a,b,c,d,e;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d" ,&a,&b,&c,&d,&e);
        sum=(a+b+c+d+e);
        avg=sum/5;

        printf("%d\n",avg);

    }

    return 0;
}
