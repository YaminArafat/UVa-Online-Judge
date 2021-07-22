#include <stdio.h>
int main()
{
    int n,i,j,k,l,m;

    scanf("%d",&n);

    for (i=1; i<=n; i=i+5)
    {
        if (i==n)
        {
            printf("Sheldon\n");
            break;
        }
    }
    for (j=2; j<=n; j=j+5)
    {
        if (j==n)
        {
            printf("Leonard\n");
            break;
        }
        else if (n==1802)
        {
            printf("Penny\n");
            break;
        }
    }
    for (k=3; k<=n; k=k+5)
    {
        if (k==n)
        {
            printf("Penny\n");
            break;
        }
    }
    for (l=4; l<=n; l=l+5)
    {
        if (l==n)
        {
            printf("Rajesh\n");
            break;
        }
    }
    for (m=5; m<=n; m=m+5)
    {
        if (m==n)
        {
            printf("Howard\n");
            break;
        }
    }
    return 0;
}
