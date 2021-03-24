#include <stdio.h>
int main()
{
    int tc,d,i,sum=0;
    char str[7];
    char str1[7];
    scanf("%d",&tc);
    for (i=0;i<tc/2;i++)
    {
        scanf("%s",str);
        scanf("%d",&d);
        scanf("%s",str1);
        sum=sum+d;
        printf("%d\n",sum);
    }
}
