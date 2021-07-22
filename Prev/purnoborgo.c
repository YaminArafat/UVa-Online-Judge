#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    int a,y;
    float x;

    scanf("%d" , &n);

    for (i=1;i<=n;i++)
    {

        scanf("%d", &a);

        x=sqrt(a);

        if (x==(int)x)
        {
            printf("YES\n",x);
        }
        else
        {
             printf("NO\n",x);
        }
    }
    return 0;
}
