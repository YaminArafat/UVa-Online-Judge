#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
#define ll long long
using namespace std;
ll arr[10005],dp[10005][105];
ll call(ll i,ll sum,ll n,ll k)
{
    //cout<<i<<" "<<sum<<" "<<" "<<dp[i][sum]<<endl;
    if(i==n)
    {
        if(sum==0)
            return 1;
        return 0;
    }
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    ll r1=0,r2=0;
    ll x=sum+arr[i];
    x%=k;
    if(x<0)
        x+=k;
    r1=call(i+1,x,n,k);
    if(i>0)
    {
        ll y=sum-arr[i];
        y%=k;
        if(y<0)
            y+=k;
        r2=call(i+1,y,n,k);
    }
    //cout<<"ret1 = "<<r1<<" "<<endl<<"ret2 = "<<r2<<" "<<endl<<i<<" "<<sum<<" "<<dp[i][sum]<<endl;
    return dp[i][sum]=((r1%1000000007)+(r2%1000000007))%1000000007;
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,k;
        scanf("%lld %lld",&n,&k);
        memset(dp,-1,sizeof(dp));
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        if(call(0,0,n,k))
        {
            printf("Divisible\n");
        }
        else
        {
            printf("Not divisible\n");
        }
    }
    return 0;
}
