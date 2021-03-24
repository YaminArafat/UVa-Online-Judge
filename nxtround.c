#include <stdio.h>
int main()
{
    int n,k,x=0,i;
    int array[51];
    scanf("%d %d",&n,&k);
    for (i=0;i<=n;i++)
    {
        scanf("%d",&array[i]);
        //if (array[i]!=array[i-1] && array[i]!=array[i+1])
       // {
            if (array[i]>=array[k])
            {
                x++;
            }
       // }
    }
    printf("%d\n",x);
    return 0;
}
