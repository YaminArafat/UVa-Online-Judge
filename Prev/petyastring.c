#include <stdio.h>
int main()
{
    char str[101];
    char str1[101];
    int i,j;

    scanf("%s",str);
    scanf("%S",str1);
    for (i='a',j='A';i<='z',j<='Z';i++,j++)
    {
        i=j;
    if (str==str1)
    {
        printf("0\n");
    }
    }
    return 0;
}
