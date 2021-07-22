#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>
using namespace std;
int main()
{
    int i,k,x;
    char str[100];
    //char i;
    char a;

    scanf("%s",str);

    x=sizeof(str);
    for (i=1; i<=x; i++)
    {
            a=str[i];
        if (str[i++]==a)
        {
            k++;
            x=x-k;
            printf("%d %d",k,x);
            if (x%2==0)
            {
                printf("CHAT WITH HER!\n");
                break;
            }
            else if (x%2!=0)
            {
                printf("IGNORE HIM!\n");
                break;
            }
        }
    }
    return 0;
}
