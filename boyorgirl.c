#include <iostream>
#include <cstdio>
#include <string.h>
int main()
{
    int k,i,a;
    string str;

    gets(str);

    x=strlen(str);
    for (i=1; i<=x; i++)
    {
            a=str[i];
        if (str==str[i])
        {
            k++;
            x=x-k;
            if (k%2==0)
            {
                printf("CHAT WITH HER!\n");
            }
            else
            {
                printf("IGNORE HIM!");
            }
        }
    }
    return 0;
}
