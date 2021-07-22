#include <stdio.h>
int main()
{
    int n,i,sum=0;
    int array[101];
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&array[i-1]);
        sum=sum+array[i-1];
    }
    printf("%d\n",sum/2);
    return 0;
}
