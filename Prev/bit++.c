#include <stdio.h>
int main()
{
    int x,X=0,i;
    char str[4];
    scanf("%d",&x);
    for (i=1; i<=x; i++)
    {
        scanf("%s",&str);
        if (str[1]=='+')
        {
            X++;
        }
        if (str[1]=='-')
        {
            X--;
        }
    }
    printf("%d\n",X);
    return 0;
}
