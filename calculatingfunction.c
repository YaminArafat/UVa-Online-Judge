#include <stdio.h>
#include <math.h>
int main()
{
    int n,f,x,sum=0,i;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        x=(-1)*n;
        if (n%2==0)
        {
            x=abs(x);
        }
        else
        {
            x=x;
        }
    }
    f=-1+2-3+n*x;
    printf("%d",f);
    return 0;
}
