#include <stdio.h>
int main()
{
    int n,a,b,i,sum,j;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d\n%d", &a, &b);


        if (a<=b)
        {
            a=a+1;
            if (a%2!=0)
            {
                sum=sum+a;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
