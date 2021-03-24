#include <stdio.h>
int main()
{
    int a,b,c,c1,c2,c3,c4,c5;
    scanf("%d %d %d",&a,&b,&c);
    c1=a*(b+c);
    c2=(a+b)*c;
    c3=a*b*c;
    c4=a+b*c;
    c5=a+b+c;
    if (c1>c2 && c1>c3 && c1>c4 && c1>c5)
    {
        printf("%d",c1);
    }
    else if (c2>c1 && c2>c3 && c2>c4 && c2>c5)
    {
        printf("%d",c2);
    }
    else if (c3>c2 && c3>c2 && c3>c2 && c3>c5)
    {
        printf("%d",c3);
    }
    else if (c4>c2 && c4>c3 && c4>c1 && c4>c5)
    {
        printf("%d",c4);
    }
    else if (c5>c2 && c5>c3 && c5>c1 && c5>c4)
    {
        printf("%d",c5);
    }
    else if (a==b && b==c && c==a)
    {
        printf("%d",c3);
    }
    else if (b==1)
    {
        printf("%d",c1);
    }
    else if (b==1 && c>a)
    {
        printf("%d",c1);
    }
    else if (b==1 && a>c)
    {
        printf("%d",c2);
    }
    return 0;
}
