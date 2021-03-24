#include <stdio.h>
int main()
{
    int i,n,sum=0,b[200],a,j;
    float avg;

    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {

        scanf("%d %d",&a ,&b);

        sum=sum+b;
        avg=(float)sum/a;
        printf("%.2f\n",avg);
    }

    return 0;
}
