#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,x,y,z=0;
    char wrd[1000];

    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf("%s", wrd);

        x=strlen(wrd);
        printf("%d\n",x);

        y=(x*420);
        z=z+y;

        printf("%d\n",z);
    }
    return 0;
}

