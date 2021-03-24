#include <stdio.h>
#include <string.h>
int main()
{
    long int array[100000000];
    long int i,x;


    scanf("%I64d",&array);

    x=sizeof(array);

    for (i=0;i<=x;i++)
    {
        array[i];
        if (array[i]=='4'||'7')
        {
            printf("YES\n");
        }
       // else
        //{
          //  printf("NO\n");
       // }
    }
    return 0;
}
