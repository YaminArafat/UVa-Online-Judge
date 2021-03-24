#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <utility>
using namespace std;
int strt[1005],endd[1005],eff[1005],dp[1005];
vector<pair<pair<int,int>,int> >p;
int call(int i,int m,int r)
{
    if(i==m)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    int ret1=0,ret2=0;
    if(p[i].first.second+r<=p[i+1].first.first)
    {
        ret1=p[i].second+call(i+1,m,r);
    }
    ret2=call(i+1,m,r);
    return dp[i]=max(ret1,ret2);
}
int main()
{
    int n,m,r,x,y,z;
    scanf("%d %d %d",&n,&m,&r);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        p.push_back(make_pair(make_pair(x,y),z));
    }
    sort(p.begin(),p.end());
    memset(dp,-1,sizeof(dp));
    printf("%d\n",call(0,m,r));
    return 0;
}
