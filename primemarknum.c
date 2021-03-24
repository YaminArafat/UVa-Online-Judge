#include <stdio.h>
int main()
{
    int x,n,o=0,u;
    int a[10];
    int k,l,m,fact=0;

    scanf("%d",&n);

    for (x=1; x<=n; x++)
    {
        scanf("%d", &a);

        for (m=2; m<=a/2; m++)
        {
            k=a%m;
            if (k==0)
            {
                fact=1;
                break;
            }

        if (fact==0)
        {
            o=o+1;
            printf("%d",o);
            break;
        }
        }
    }
    return 0;
}
