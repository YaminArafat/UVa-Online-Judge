#include <bits/stdc++.h>
using namespace std;
/*int knapsack(int i,int w,int cap,int price[],int weight[],int n)
{
    int pro1,pro2;
    if(i==n)
        return 0;
    if(w+weight[i]<=cap)
    {
        return max(price[i]+knapsack(i+1,w+weight[i],cap,price,weight,n),knapsack(i+1,w,cap,price,weight,n));
    }
    else
    {
        return knapsack(i+1,w,cap,price,weight,n);
    }
}*/
int knapsack(int cap,int price[],int weight[],int n)
{
    int dp[n+1][cap+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=cap;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if(weight[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(price[i]+dp[i-1][j-weight[i]],dp[i-1][j]);
        }
    }
    return dp[n][cap];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,g,sum=0,x;
        scanf("%d",&n);
        int price[n+1],weight[n+1];
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&price[i],&weight[i]);
        }
        scanf("%d",&g);
        for(int i=1;i<=g;i++)
        {
            scanf("%d",&x);
            sum+=knapsack(x,price,weight,n);
            //memset(dp,0,sizeof(dp));
        }
        printf("%d\n",sum);
    }
    return 0;
}
/*int pro1,pro2;
    if(i==n)
        return 0;
    if(w+weight[i]<=cap)
    {
        return max(price[i]+knapsack(i+1,w+weight[i],cap,price,weight,n),knapsack(i+1,w,cap,price,weight,n));
    }
    else
    {
        return knapsack(i+1,w,cap,price,weight,n);
    }*/
