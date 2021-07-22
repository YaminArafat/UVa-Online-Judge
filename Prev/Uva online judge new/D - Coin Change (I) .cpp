#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int dp[55][1005];
/*int coinchng(int i,int amount,int coin[],int taken[],int k,int n)
{
    if(i>=n)
    {
        if(amount==k)
        {
            return 1;
        }
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount+coin[i]<=k && taken[i])
    {
        taken[i]--;
        ret1=coinchng(i,amount+coin[i],coin,taken,k,n);
    }
    ret2=coinchng(i+1,amount,coin,taken,k,n);
    return dp[i][amount]=ret1+ret2;
    //return dp[n-1][k-1];
}**/
ll coinchng(ll n,ll k,ll coin[],ll taken[])
{
    ll dp[n+1][k+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            if(!i||!j)
                dp[i][j]=0;
            else if(coin[i]<=j)
            {
                //cout<<coin[i]<<endl;
                ll tot=0,f=0;
                for(ll t=0;t<taken[i];t++)
                {
                    tot+=coin[i];
                    //cout<<tot<<" "<<dp[i-1][j-tot]<<endl;
                    if(tot<=j){
                            //dp[i][j]=0;
                    dp[i][j]+=dp[i-1][j-tot];
                    //dp[i][j]%=100000007;
                    }
                    if(tot==j)
                    {
                        dp[i][j]+=dp[i-1][j]+1;
                        //dp[i][j]%=100000007;
                        f=1;
                        break;
                    }
                    if(tot>j)
                        break;
                }
                if(!f)
                {
                    dp[i][j]+=dp[i-1][j];
                    //dp[i][j]%=100000007;
                }
                dp[i][j]%=100000007;
            }
            else
            {
                dp[i][j]=dp[i-1][j];
                //dp[i][j]%=100000007;
            }
        }
    }
    /*for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return dp[n][k];//%100000007;
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    ll t,c=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,k;
        scanf("%lld %lld",&n,&k);
        //memset(dp,-1,sizeof(dp));
        ll taken[n+1],coin[n+1];
        for(ll i=1;i<=n;i++)
        {
            scanf("%lld",&coin[i]);
        }
        for(ll i=1;i<=n;i++)
        {
            scanf("%lld",&taken[i]);
        }
        printf("Case %lld: %lld\n",++c,coinchng(n,k,coin,taken));
    }
    return 0;
}
