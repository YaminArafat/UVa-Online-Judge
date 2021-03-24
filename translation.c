#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char rev[100];
    char a,b;
    int i;

    scanf("%s",str);
    scanf("%s",rev);

    for (i=1;i<=sizeof(str)-1;i++)
    {
        a=str[i-1];
        b=rev[sizeof(str)-1-i];
        if (a!=b)
        {
            printf("NO\n");
            break;
        }
        else if (a==b)
        {
            printf("YES\n");
            break;
        }
    }
    return 0;
}
