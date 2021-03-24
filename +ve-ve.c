#include <stdio.h>
int main()

{
    int x,y=0,z=0,i,n;

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);

        if (x>=0)
        {
            y=y+1;
        }
        else
        {
            z=z+1;
        }
    }

    printf("%d %d\n", y, z);

    return 0;
}
