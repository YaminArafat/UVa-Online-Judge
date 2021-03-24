#include <bits/stdc++.h>
using namespace std;
void seive(int n)
{
    bool flag[n+1];
    memset(flag,0,sizeof(flag));
    int temp=n;
    flag[0]=1;
    flag[1]=1;
    for (int i=4; i<=n; i+=2)
    {
        flag[i]=1;
    }
    for(int i=3; i*i<=n; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=n; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    if(n%2)
    {
        int j;
        for(j=3; j<=n; j+=2)
        {
            if(!flag[j])
            {
                if(!((temp-j)%2))
                {
                    temp-=j;
                    break;
                }
            }
        }
        printf("%d\n",(temp/2)+1);
        int count=(temp/2);
        while(count--)
        {
            printf("%d ",2);
        }
        printf("%d ",j);
    }
    else
    {
        printf("%d\n",n/2);
        temp=n/2;
        while(temp--)
        {
            printf("%d ",2);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    seive(n);
    return 0;
}




/*if(n%5==0)
    {
        printf("%d\n",n/5);
        while ((n/5)--)
        {
            printf("%d ",5);
        }
    }
    else if(n%2==0)
    {
        printf("%d\n",n/2);
        while ((n/2)--)
        {
            printf("%d ",2);
        }
    }
    for(int i=2; i<=n; i++)
        {
            int count=0;
            if(!flag[i])
            {
                temp-=i;
                count++;
                for(int j=2;j<=n;j++)
                {
                    if(!flag[j])
                    {
                        if(!(temp%j))
                        {

                        }
                    }
                }
            }
        }
        if(!(temp%2))
        {
            printf("%d\n",temp/2);
            temp/=2;
            while(temp--)
            {
                printf("%d ",2);
            }
        }


    */
