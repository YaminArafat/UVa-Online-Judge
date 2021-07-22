#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#define ll long long
using namespace std;
ll call(ll n)
{
    ll dp[n+5][n+5];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<=n;j++)
        {
            if(!i||!j)
                dp[i][j]=0;
            else if(j<i)
                dp[i][j]=dp[i-1][j];
            else if (j==i)
                dp[i][j]=dp[i-1][j]+1;
            else
                dp[i][j]=dp[i-1][j]+dp[i-1][j-i];
        }
    }
    return dp[n-1][n];
}
int main()
{
    ll n;
    scanf("%lld",&n);
    printf("%lld\n",call(n));
    return 0;
}
