#include <stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("red\n");
        }
        else
        {
            printf("blue\n");
        }
    }
    return 0;
}
