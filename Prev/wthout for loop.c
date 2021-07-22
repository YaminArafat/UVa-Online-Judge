#include <stdio.h>

int main()
{
    int n,x,p=2,m=3;


    scanf("%d", &n);
    if (n%2!=0)
        {
    x=n/p;

    printf("%d\n",p);
    printf("%d %d\n",x,(n-x));
        }
       else if (n%2==0)
        {
    x=n/m;

    printf("%d\n",p);
    printf("%d %d\n",x,(n-x));
        }

    getch();
}
