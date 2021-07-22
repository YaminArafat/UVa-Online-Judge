#include <stdio.h>
#include <math.h>

int main()
{
    int n,x,i,k;

    scanf("%d",&n);

    x=n/2;

    for (i=2; i<=x; i=i+1)
    {
        k=n%i;

        if (k == 0)

            break;

        if (i==x)
        {
            printf("%d Is Prime\n",n);
            break;
        }
        else
        {
            printf("%d Is Not Prime\n",n);
            break;
        }
    }

    return 0;
}
