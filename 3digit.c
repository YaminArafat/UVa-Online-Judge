#include <stdio.h>

int main()
{
    int n,x,p=2,i,m=3;

    for (i=0;i<=100;i++)
{
    scanf("%d", &n);
    if (n%2!=0)
        {
    x=n/p;

    printf("%d\n",p+1);
    printf("%d %d %d",x-1,(n-x),(n-(n-x)-x+1));
        }
        if (n%2==0)
        {
    x=n/m;

    printf("%d\n",m);
    printf("%d %d %d",x-1,(n-x),(n-(n-x)-x+1));
        }
}
    getch();
}
