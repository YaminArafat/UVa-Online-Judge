#include <stdio.h>
int main()
{
    int tc,a,b,i;

    scanf("%d" , &tc);

    for (i=1;i<=tc;i++)
    {
        scanf("%d %d" , &a , &b);
        if (a>b)
        {
            printf(">\n");
        }
        else if (a<b)
        {
            printf("<\n");
        }
        else if (a==b)
        {
            printf("=\n");
        }
    }
    return 0;
}
