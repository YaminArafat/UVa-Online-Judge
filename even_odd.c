#include <stdio.h>
int main()
{
    int n,i,x;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);

        if (x>=0 && x<=2147483647)
        {
        if (x%2==0)
        {
            printf("even\n",x);
        }
        else
        {
            printf("odd\n",x);
        }
        }
    }
    return 0;
}
