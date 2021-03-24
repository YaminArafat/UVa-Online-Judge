#include <stdio.h>

int main()
{
    int n,x,p=2,i,m=3;

    //for (i=0;i<=100;i++)
//{
    scanf("%d", &n);
        if (n%2!=0)
        {
    x=n/p;
        if (x%x==1)
    {
    printf("%d\n",p);
    printf("%d %d\n",x,(n-x));
    }
        if (x%x!=1)
    {
        x=(x-1)||(x-2)||(x-3)||(x-4)||(x-5);
    printf("%d\n",p);
    printf("%d %d\n",x,(n-x));
    }
        }
        else if (n%2==0)
        {
    x=n/m;
        if (x%x==1 && x%1==x)
    {
    printf("%d\n",p);
    printf("%d %d\n",x,(n-x));
    }
        }
//}
    getch();
}
