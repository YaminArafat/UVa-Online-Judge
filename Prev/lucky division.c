#include <stdio.h>
#include <string.h>
int main()
{
    int array[3];
    int len,i;
    scanf("%d",&array);
    len=sizeof(array);
    for (i=0;i<=len;i++)
    {
        array[i];
        if ((array[i]%4==0) && (array[i]%7==0) || array[0]==4 || array[1]==7)
        {
            printf("YES\n");
            break;
        }
        else if ((array[i]%4!=0) && (array[i]%7!=0))
        {
            printf("NO\n");
            break;
        }
    }
    return 0;
}
