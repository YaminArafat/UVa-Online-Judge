#include <stdio.h>
int main()
{
    int i,n,b[5],sum,x;
    float avg;
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]);
        x=b[0]+b[1]+b[2]+b[3]+b[4];
        sum=x;
        avg=sum/5;
        printf("%d\n",sum);
        printf("%.2f\n",avg);

    }
return 0;
}
