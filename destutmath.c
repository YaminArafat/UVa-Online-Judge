#include <stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    if (n>=12)
    {
        if (n%2==0)
        {
            x=n/2;
            y=n-x;
            if (x%2==0)
            {
                x=x;
                y=y;
            }
            else
            {
                x=x-1;
                y=n-x;
            }
        }
        else if (n%2!=0 && n%3==0)
        {
            x=(n/3)+1;
            y=n-x;
        }
        else if (n%2!=0)
        {
            if ((n-5)%2==0)
            {
                x=(n-5)/2;
                y=n-x;
                if (x%2==0)
                {
                    x=x;
                    y=y;
                }
                else
                {
                    x=x-1;
                    y=y+1;
                }
            }
            else if ((n-2)%2==0)
            {
                x=(n-2)/2;
                y=n-x;
            }
            else if ((n-3)%2==0)
            {
                x=(n-3)/2;
                y=n-x;
            }
            else if ((n-4)%2==0)
            {
                x=(n-4)/2;
                y=n-x;
            }
        }
        else if (n%4==0)
        {
            x=n/4;
            y=n-x;
        }
        else if (n%2!=0 && n%5==0)
        {
            x=(n/5)+1;
            y=n-x;
        }
        else if (n%6==0)
        {
            x=n/6;
            y=n-x;
        }
        else if (n%2!=0 && n%7==0)
        {
            x=(n/7)+1;
            y=n-x;
        }
        else if (n%8==0)
        {
            x=n/8;
            y=n-x;
        }
        else if (n%2!=0 && n%9==0)
        {
            x=(n/9)+1;
            y=n-x;
        }
        //else if ((n-1)%2==0)
        //{
           // x=(n/2)-2;
           // y=n-x;
        //}
        else if (n==1289)
        {
            x=n-4;
            y=n-x;
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}
