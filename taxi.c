#include <stdio.h>
int main()
{
    int array[100000];
    int n,i,x=0,y=0,j=0;

    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&array[i-1]);
        if (array[i-1]>=4 || array[i-1]>=3)
        {
            x++;
        }
        if (array[i-1]<3)
        {
            for (y=0;y<=4;y=array[i-1]+array[(i-1)+1])
            {
                j++;
            }
        }
        x=x+j;
    }
    printf("%d\n",x);
    return 0;
}
