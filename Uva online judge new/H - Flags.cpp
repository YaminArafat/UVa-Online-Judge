#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;
/*ll dp[50][5];
ll call(ll i,ll flag,ll n)
{
    if(i>=n-1)
    {
        return 1;
    }
    //cout<<i<<" "<<flag<<" "<<dp[i][flag]<<endl;
    if(dp[i][flag]!=-1)
        return dp[i][flag];
    ll r1=0,r2=0,r3=0;
    /*if(i==1)
    {
        r2=call(i+1,n);
        r3=call(i+2,n);
    }
    else if (i==2)
    {
        r3=call(i+1,n);
        r1=call(i-1,n);
    }
    else
    {
        r1=call(i-2,n);
        r2=call(i-1,n);
    }
    if (!i)
    {
        r1=call(i+1,1,n);
        r2=call(i+1,2,n);
    }
    else if(flag==1)
        r1=call(i+1,2,n);
    else if(flag==2)
        r2=call(i+1,1,n);
    if(i>0 && i<n)
    {
        if(flag==2)
            r3=call(i+2,1,n);
        else
            r3=call(i+2,2,n);
    }
    //r3=call(i+3,n);
//    cout<<"        r1 : "<<r1<<endl;
//    cout<<"        r2 : "<<r2<<endl;
//    cout<<"        r3 : "<<r3<<endl;
//    cout<<i<<" "<<flag<<" "<<dp[i][flag]<<endl;
    return dp[i][flag]=r1+r2+r3;
}*/
ll dp[50];
ll call(ll n)
{
    if(n==1||n==2)
        return 2;
    if(dp[n]!=-1)
        return dp[n];
    else
        return dp[n]=call(n-1)+call(n-2);
}
int main()
{
    ll n;
    memset(dp,-1,sizeof(dp));
    scanf("%lld",&n);
    /*if(n==1||n==2)
    {
        printf("2\n");
        return 0;
    }
    ll arr[50]={0};
    arr[1]=2;
    arr[2]=2;
    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }*/
    printf("%lld\n",call(n));
    /*memset(dp,-1,sizeof(dp));
    printf("%lld\n",call(0,0,n));*/
    return 0;
}
