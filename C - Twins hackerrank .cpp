#include <bits/stdc++.h>
#define maxx 31630
using namespace std;
vector<long long>prime;
void seive()
{
    bool flag[maxx+10]= {0};
    for (long long i=3; i*i<=maxx; i+=2)
    {
        if(!flag[i])
        {
            for (long long j=i*i; j<=maxx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(long long i=3; i<=maxx; i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }
}
void segmented_Sieve(long long l,long long u)
{
    bool flag[u-l+10]= {0};
    for (long long i=0; (long long)(prime[i]*prime[i])<=u; i++)
    {
        long long curr_Prime=prime[i];
        long long base_Val=(l/curr_Prime)*curr_Prime;
        if(base_Val<l)
        {
            base_Val+=curr_Prime;
        }
        for(long long j=base_Val; j<=u; j+=curr_Prime)
        {
            if(!flag[j-l])
                flag[j-l]=1;
        }
        if(base_Val==curr_Prime)
        {
            flag[base_Val-l]=0;
        }
    }
    if(l<2)
    {
        flag[l-l]=1;
    }
    long long count=0;
    for(long long i=0; i<=u-l-2; i++)
    {
        if(!flag[i] && !flag[i+2])
        {
            count++;
        }
    }
    printf("%lld",count);
}
int main()
{
    long long l,u;
    seive();
    scanf("%lld %lld",&l,&u);
    {
        if(l==u||u-l==1||u<=4)
        {
            printf("0");
            return 0;
        }
        else
        {
            segmented_Sieve(l,u);
        }
    }
    return 0;
}
