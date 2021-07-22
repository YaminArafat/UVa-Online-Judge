#include <iostream>
#include <cstdio>
#include <cstdlib>
//#include <algorithm>
#include <cstring>
//#include <utility>
//#include <vector>
using namespace std;
int arr[22][5],dp[22][5];
int call(int i,int j,int n)
{
    if(i<n && i>=0 && j>=0 && j<3)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ret=100000000;
        if(j==0)
        {
            ret=min(ret,arr[i][j]+call(i+1,j+1,n));
            ret=min(ret,arr[i][j]+call(i+1,j+2,n));
        }
        else if(j==1)
        {
            ret=min(ret,arr[i][j]+call(i+1,j-1,n));
            ret=min(ret,arr[i][j]+call(i+1,j+1,n));
        }
        else if(j==2)
        {
            ret=min(ret,arr[i][j]+call(i+1,j-2,n));
            ret=min(ret,arr[i][j]+call(i+1,j-1,n));
        }
        return dp[i][j]=ret;
    }
    else
    {
        return 0;
    }
}
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,mn=100000000;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            for (int j=0; j<3; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        memset(dp,-1,sizeof(dp));
        mn=min(mn,call(0,0,n));
        mn=min(mn,call(0,1,n));
        mn=min(mn,call(0,2,n));
        printf("Case %d: %d\n",++c,mn);
    }
    return 0;
}
/*
int tmp=-1;
        for(int p=0; p<3; p++)
        {
            for(int i=0; i<n; i++)
            {
                int j;
                for (j=0; j<3; j++)
                {
                    if(j==tmp && i)
                    {
                        if(j==0)
                        {
                            sum+=min(arr[i][j+1],arr[i][j+2]);
                            if(arr[i][j+1]>arr[i][j+2])
                            {
                                j+=2;
                            }
                            else
                            {
                                j++;
                            }
                        }
                        else if (j==1)
                        {
                            sum+=min(arr[i][j-1],arr[i][j+1]);
                            if(arr[i][j-1]>arr[i][j+1])
                            {
                                j++;
                            }
                            else
                            {
                                j--;
                            }
                        }
                        else if (j==2)
                        {
                            sum+=min(arr[i][j-2],arr[i][j-1]);
                            if(arr[i][j-1]>arr[i][j-2])
                            {
                                j-=2;
                            }
                            else
                            {
                                j--;
                            }
                        }
                        break;
                    }
                    else if(!i && j>tmp)
                    {
                        sum+=arr[i][j];
                        break;
                    }
                }
                tmp=j;
            }
            tmp=p;
            mn=min(mn,sum);
            //cout<<sum<<endl;
            sum=0;
        }
        printf("Case %d: %d\n",++c,mn);
    }
*/
