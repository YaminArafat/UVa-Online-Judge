#include <stdio.h>
#include<string.h>

int main()
{
    int n,i,y,j;
    char x[100];

    scanf("%d",&n);

    for (i=0;i<=n;i++)
    {
        gets(x);
        //printf("%s\n",x);

        //y=strlen(x);

        for (y=0;y=='\0';y++)
        {
        printf("%d\n",y);
        return y;
        }
    }

    return 0;
}
