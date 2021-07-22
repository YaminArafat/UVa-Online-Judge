#include <stdio.h>

int main()
{
    int n,x,i,k,fact=0;

    scanf("%d",&n);

    x=n/2;

    for (i=2; i<=x;i=i+1)
    {
        k=n%i;

        if (k == 0)
        {
            fact=1;
            break;
        }
    }

        if (fact==0)
        {
            printf("%d Is Prime.\n",n);
        }
        else
        {
            printf("%d Is Not Prime.\n",n);
        }

    return 0;
}
