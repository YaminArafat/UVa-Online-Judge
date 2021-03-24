#include <stdio.h>
int main()
{
    char in[101],temp;
    int i,x;

    scanf("%d",&in);
    x=sizeof(in);
    for (i=0;i<=x;i=i+2)
    {
        if (in[i]>in[i+1])
        {
            temp=in[i+1];
            in[i]=in[i+1]=in[i];
            //in[i]=temp;
        }
        printf("%s",in);
    }

    return 0;
}
