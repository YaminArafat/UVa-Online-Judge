#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<pair<ll,ll>,ll> >vp;
ll dp[1005][1005];
ll call(ll i,ll sum,ll m,ll r)
{
    //cout<<1<<endl;
    if(i==m)
        return 0;
    if(abs(vp[i].first.second-vp[i+1].first.first)>=r)
    {
        return 0;
    }
    ll r1=0,r2=0;
    if(i<0)
    {
        r1=call(i+1,sum,m,r);
        r2=call(i+2,sum,m,r);
    }
    if(dp[i][sum]!=-1)
        return dp[i][sum];
    cout<<i<<" "<<sum<<endl;

    sum+=vp[i].second;
    //r1=call(i+1)

//    {
//        r1=call(i+1,sum,m,r);
//    }
    //else
    {
        r1=call(i+1,sum,m,r);
    }
    r2=call(i+2,sum,m,r);
    cout<<"r1 = "<<r1<<endl<<"r2 = "<<r2<<endl<<i<<" "<<sum<<endl;
    return dp[i][sum]=max(r1,r2);
}
int main()
{
    ll n,m,r,x,y,z;
    scanf("%lld %lld %lld",&n,&m,&r);
    memset(dp,-1,sizeof(dp));
    //cout<<1;
    for(ll i=1; i<=m; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        vp.push_back(make_pair(make_pair(x,y),z));
    }
    sort(vp.begin(),vp.end());

    for(ll i=0; i<m; i++)
    {
        cout<<vp[i].first.first<<" "<<vp[i].first.second<<" "<<vp[i].second<<endl;
    }
    printf("%lld\n",call(-1,1,m,r));
    return 0;
    //vp[m]
}
