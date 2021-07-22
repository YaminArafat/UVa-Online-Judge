#include <stdio.h>
#include <string.h>

int main()
{
    char str;
    int i,j;

    for (i=1; i!='*'; i++)
    {
        scanf("%s", &str);

        if (str=='*')
        {
            break;
        }

        else if (str=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asgar\n",++i);

        }

    }

    return 0;
}
