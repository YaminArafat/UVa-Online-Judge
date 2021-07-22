#include <stdio.h>
int main()

{
    int n,a,b,sum=0,i;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d\n%d", &a, &b);
        for (; a<=b; a++)
        {
            if (a%2!=0)
            {
                sum=sum+a;
            }
        }
        printf("Case %d: %d\n",i,sum);
        sum=0;
    }

    return 0;
}
