#include <stdio.h>
int main()
{
    int n,i,a,b,j;
    int arr[100];
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&arr[i-1]);
    }
    for (j=0; j<=sizeof(arr); j++)
    {
        arr[i-1]=arr[j];
        arr[i]=arr[j+1];
        if (arr[i-1]==arr[i])
        {
            printf("MAGIC\n");
        }
        else
        {
            printf("NORMAL\n");
        }
    }
    return 0;
}
