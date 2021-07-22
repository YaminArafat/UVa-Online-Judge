#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int n,c=0;
    while(scanf("%d",&n)==1 && n)
    {
        int arr[n+1],cnt=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Case %d:\n",++c);
        arr[n]=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i+1]-arr[i]==1)
            {
                cnt++;
            }
            else
            {
                if(!cnt)
                {
                    printf("0%d\n",arr[i]);
                }
                else
                {
                    int a=arr[i]-cnt,b=arr[i],p=log10((double)b),fact,range;
                    fact=powl(10,p);
                    int dig_a=a/fact,dig_b=b/fact;
                    while (dig_a==dig_b)
                    {
                        fact/=10;
                        dig_a=a/fact,dig_b=b/fact;
                    }
                    fact*=10;
                    range=(arr[i])%fact;
                    printf("0%d-%d\n",arr[i]-cnt,range);
                    cnt=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
/*

while (b!=0)
                    {
                        int dig_a=a%10,dig_b=b%10;
                        if(dig_a==dig_b)
                            break;
                        range+=dig_b*fact;
                        fact*=10;
                        a/=10;
                        b/=10;
                    }

*/
