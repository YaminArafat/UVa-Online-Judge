#include <stdio.h>
int main()
{
    int i,x;
    char str[50];

    scanf("%d", &x);

    for (i=1; i<=x; i++)
    {
        scanf("%s", &str[i]);

        if (str=='L')
        {
            str[i]=str[i]-1;
        }
        if (str=='R')
        {
            str[i]=str[i]+1;
        }
        printf("%s\n", str);
    }
    return 0;
}
