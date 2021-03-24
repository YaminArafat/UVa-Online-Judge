#include <stdio.h>
int main()
{
    int n,a,b,i,x,y;

    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        x=b-a;
        if (i=2)
        {
            y=x+b;
        }
    }
    printf("%d\n",abs(y));
    return 0;
}
