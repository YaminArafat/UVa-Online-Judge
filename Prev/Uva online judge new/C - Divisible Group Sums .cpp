#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
//#include <utility>
//#include <vector>
#define ll long long
using namespace std;
ll arr[250],f,dp[250][20][15];
ll call(ll i,ll sum,ll cnt,ll n,ll d,ll m)
{
    if(i==n)
    {
        if(sum==0 && cnt==m)
            return 1;
        return 0;
    }
    if(cnt==m)
    {
        if(sum==0)
            return 1;
        return 0;
    }
    //cout<<i<<" "<<sum<<" "<<cnt<<" "<<dp[i][sum][cnt]<<endl;
    if(dp[i][sum][cnt]!=-1)
        return dp[i][sum][cnt];
    ll r1=0,r2=0;

    ll x=sum+arr[i];
    x%=d;
    if(x<0)
        x+=d;
    r1=call(i+1,x,cnt+1,n,d,m);
    r2=call(i+1,sum,cnt,n,d,m);
    //cout<<sum<<endl;
    //cout<<"r1 = "<<r1<<" "<<endl<<"r2 = "<<r2<<" "<<endl<<i<<" "<<sum<<" "<<cnt<<" "<<dp[i][sum][cnt]<<endl;
    return dp[i][sum][cnt]=r1+r2;
}
int main()
{
    ll t,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,q,m,d;
        scanf("%lld %lld",&n,&q);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        printf("Case %lld:\n",++c);
        for(ll i=0; i<q; i++)
        {
            scanf("%lld %lld",&d,&m);
            memset(dp,-1,sizeof(dp));
            //f=0;
            printf("%lld\n",call(0,0,0,n,d,m));
        }
    }
    return 0;
}

//freopen("input10.txt","r",stdin);
//    freopen("output10.txt","w",stdout);
