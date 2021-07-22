#include <stdio.h>
int main()
{
    int n,i,j;
    unsigned long long int x;
    int y[101];

    for (j=0;j<=100;j++)
    {
        y[j];
    }

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);

        if (x>=0 && x<y[j])
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
