#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool flag2[MAX+1];
vector <long long>prime;
vector <long long>digprime;
void seive(void)
{
    bool flag[MAX];
    memset(flag,0,sizeof(flag));
    memset(flag2,1,sizeof(flag2));
    for(long long i=3; i*i<=MAX; i+=2)
    {
        if(!flag[i])
        {
            for(long long j=i*i; j<=MAX; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    prime.push_back(2);
    flag2[2]=0;
    for(long long i=3; i<=MAX; i+=2)
    {
        if(!flag[i])
        {
            prime.push_back(i);
            flag2[i]=0;
        }
    }
}
void segment_se(long long l,long long u,vector <long long >&prime)
{
    bool flag[u-l+1];
    memset(flag,0,sizeof(flag));
    for(long long i=0; prime[i]*(long long)prime[i]<=u; i++)
    {
        long long currprime=prime[i];
        long long base=(l/prime[i])*prime[i];
        if(base<l)
        {
            base+=currprime;
        }
        for(long long j=base; j<=u; j+=currprime)
        {
            if(!flag[j-l])
            {
                flag[j-l]=1;
            }
        }
        if(base==currprime)
        {
            flag[base-l]=0;
        }
    }
    if(l<2)
    {
        flag[0]=1;
    }
    long long count=0;
    long long temp;
    for(long long i=0; i<=u-l; i++)
    {
        if(!flag[i])
        {
            digprime.push_back(i+l);
            flag2[i+l]=0;
            /*long long temp=i+l;
            long long sum=0;
            while(temp)
            {
                long long digit=temp%10;
                sum+=digit;
                temp=temp/10;
            }
            if(!flag2[sum])
            {
                //cout<<sum<<" "<<flag2[sum]<<endl;
                count++;
            }*/
            //cout<<i+l<<endl;
            //count++;
        }
    }
    for(long long i=0; i<digprime.size(); i++)
    {
        if(l<=digprime[i])
        {
            //cout<<prime[i]<<" "<<l<<endl<<endl;
            temp=i;
            break;
        }
    }
    for(long long i=temp; digprime[i]<=u; i++)
    {
        temp=digprime[i];
        //cout<<temp<<endl<<endl;
        long long sum=0;
        while(temp)
        {
            long long digit=temp%10;
            sum+=digit;
            temp=temp/10;
        }
        if(!flag2[sum])
        {
            //cout<<sum<<" "<<flag[sum]<<endl;
            count++;
        }
    }
    printf("%lld\n",count);
}
int main()
{
    long long t,l,u;
    seive();
    while (scanf("%lld",&t)==1)
    {
        while(t--)
        {
            scanf("%lld %lld",&l,&u);
            segment_se(l,u,prime);
        }
    }
    return 0;
}
