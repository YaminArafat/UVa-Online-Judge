#include <stdio.h>

int main()
{
    int i,n,sum;
    char str[3];

    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        scanf("%s",str);
        sum=str[0]+str[1]+str[2];
        printf("%d\n",sum);
    }
    return 0;
}
