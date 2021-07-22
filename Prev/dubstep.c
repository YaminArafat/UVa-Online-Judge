#include <stdio.h>
#include <string.h>
int main()
{
    int i,temp,j;
    char str[201];
    scanf(" %[^\n]",&str);
    for (i=0; i<strlen(str); i++)
    {
        if (str[i] != 'W')
        {
            if (str[i+1] != 'U')
            {
                if (str[i+2] != 'B')
                {
                    for (j=0;j<strlen(str);j++)
                    {
                        printf("%c",str[j]);
                    }
                }
            }
        }
    }
    return 0;
}
