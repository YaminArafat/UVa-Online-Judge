#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input10.txt","r",stdin);
    freopen("output10.txt","w",stdout);
    long long t;
    while(scanf("%lld",&t)==1 && t!=EOF)
    {
        long long n,c=0,sum=0,tmp;
        while(t--)
        {
            scanf("%lld",&n);
            sum=0;
            tmp=n;
            while(1)
            {
                while(n!=0)
                {
                    long long x=(n%10)*(n%10);
                    n/=10;
                    sum+=x;
                }

                if(sum==1)
                {
                    printf("Case #%lld: %lld is a Happy number.\n",++c,tmp);
                    break;
                }
                else if(sum<10 && sum!=1)
                {
                    printf("Case #%lld: %lld is an Unhappy number.\n",++c,tmp);
                    break;
                }
                n=sum;
                sum=0;
            }
        }
    }
    return 0;
}
