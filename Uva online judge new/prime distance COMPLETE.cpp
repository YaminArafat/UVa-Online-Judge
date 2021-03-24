#include <bits/stdc++.h>
#define maxx 50000
using namespace std;
vector<long long>prime;
vector<long long>segmented_Primes;
void seive()
{
    bool flag[maxx];
    memset(flag,0,sizeof(flag));
    for (long long i=3;i*i<=maxx;i+=2)
    {
        if(!flag[i])
        {
            for (long long j=i*i;j<=maxx;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(long long i=3;i<=maxx;i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }
}
void segmented_Sieve(long long l,long long u,vector<long long>&prime)
{
    bool flag[u-l+1];
    memset(flag,0,sizeof(flag));
    for (long long i=0;(prime[i]*prime[i])<=u;i++)
    {
        long long curr_Prime=prime[i];
        long long base_Val=(l/curr_Prime)*curr_Prime;
        if(base_Val<l)
        {
            base_Val+=curr_Prime;
        }
        for(long long j=base_Val;j<=u;j+=curr_Prime)
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
        flag[0]=1;
    }
    for(long long i=0;i<=u-l;i+=1)
    {
        if(!flag[i])
        {
            segmented_Primes.push_back(i+l);
        }
    }
    if(segmented_Primes.size()<2)
    {
        printf("There are no adjacent primes.\n");
    }
    else
    {
        long long min_=10000001,max_=0,temp_min,temp_max;
        for(long long i=0;i<segmented_Primes.size()-1;i++)
        {
            if(segmented_Primes[i+1]-segmented_Primes[i]<min_)
            {
                min_=segmented_Primes[i+1]-segmented_Primes[i];
                temp_min=i;
            }
            if(segmented_Primes[i+1]-segmented_Primes[i]>max_)
            {
                max_=segmented_Primes[i+1]-segmented_Primes[i];
                temp_max=i;
            }
        }
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",segmented_Primes[temp_min],segmented_Primes[temp_min+1],segmented_Primes[temp_max],segmented_Primes[temp_max+1]);
    }
    segmented_Primes.clear();
    }
int main()
{
    long long l,u;
    seive();
    while(scanf("%lld %lld",&l,&u)==2)
    {
        segmented_Sieve(l,u,prime);
    }
    return 0;
}





/*#include <bits/stdc++.h>
//#define MAX 2147483647
#define maxx 46341
using namespace std;
vector<long long>prime;
vector<long long>segmented_Primes;
//bool flag[2*maxx];
void seive()
{
    //long long x=u;
    bool flag[maxx];
    memset(flag,0,sizeof(flag));
    /*for(long long i=0;i<=x;i++)
    {
        flag[i]=0;
    }*/
    /*for (long long i=3;i*i<=maxx;i+=2)
    {
        if(!flag[i])
        {
            for (long long j=i*i;j<=maxx;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(long long i=3;i<=maxx;i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }
}
void segmented_Sieve(long long l,long long u,vector<long long>&prime)
{
    bool flag[u-l+1];
    memset(flag,0,sizeof(flag));
    for (long long i=0;(prime[i]*prime[i])<=u;i++)
    {
        long long curr_Prime=prime[i];
        long long base_Val=(l/curr_Prime)*curr_Prime;
        if(base_Val<l)
        {
            base_Val+=curr_Prime;
        }
        for(long long j=base_Val;j<=u;j+=curr_Prime)
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
        flag[0]=1;
    }
    //long long count=0;
    for(long long i=0;i<=u-l;i+=1)
    {
        if(!flag[i])
        {
            //cout<<i+l<<endl;
            //count++;
            segmented_Primes.push_back(i+l);
        }
    }
    if(segmented_Primes.size()<2)
    {
        printf("There are no adjacent primes.\n");
    }
    else
    {
        long long min_=10000001,max_=0,temp_min,temp_max;
        for(long long i=0;i<segmented_Primes.size()-1;i++)
        {
            if(segmented_Primes[i+1]-segmented_Primes[i]<min_)
            {
                min_=segmented_Primes[i+1]-segmented_Primes[i];
                temp_min=i;
            }
            if(segmented_Primes[i+1]-segmented_Primes[i]>max_)
            {
                max_=segmented_Primes[i+1]-segmented_Primes[i];
                temp_max=i;
            }
        }
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",segmented_Primes[temp_min],segmented_Primes[temp_min+1],segmented_Primes[temp_max],segmented_Primes[temp_max+1]);
    }
    segmented_Primes.clear();
    //cout<<count<<endl;
}
int main()
{
    long long l,u;
    seive();
    /*for(long long i=0;i<prime.size();i++)
    {
        cout<<prime[i]<<endl;
    }*/
    /*while(scanf("%lld %lld",&l,&u)==2)
    {
        segmented_Sieve(l,u,prime);
    }
    return 0;
}*/
