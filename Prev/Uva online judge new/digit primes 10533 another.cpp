#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
bool flag[MAX+1];
vector <long long>prime;
void seive(void)
{
    for(long long i=4; i<=MAX; i+=2)
    {
        flag[i]=1;
    }
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
    flag[1]=1;
    flag[0]=1;
    long long count=0;
    for(long long i=1; i<=MAX; i++)
    {
        if(!flag[i])
        {
            long long temp=i;
            long long sum=0;
            while(temp)
            {
                long long digit=temp%10;
                sum+=digit;
                temp=temp/10;
            }
            if(!flag[sum])
            {
                count++;
            }
        }
        prime.push_back(count);
    }
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
            if(!flag[l])
                l--;
            printf("%lld\n",prime[u-1]-prime[l-1]);
        }
    }
    return 0;
}














///////segmented seive///////////////////////
/*void digit_prime(long long l,long long u,vector<long long>&prime)
{
    long long temp;
    for(long long i=0; i<prime.size(); i++)
    {
        if(l<=prime[i])
        {
            //cout<<prime[i]<<" "<<l<<endl<<endl;
            temp=i;
            break;
        }
    }
    //cout<<temp<<endl<<endl;
    long long count=0;
    for(long long i=temp; prime[i]<=u && i<prime.size(); i++)
    {
        temp=prime[i];
        //cout<<temp<<endl<<endl;
        long long sum=0;
        while(temp)
        {
            long long digit=temp%10;
            sum+=digit;
            temp=temp/10;
        }
        if(!flag[sum])
        {
            //cout<<sum<<" "<<flag[sum]<<endl;
            count++;
        }
    }
    printf("%lld\n",count);
}*/
