#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[400][750];
//vector<int>arr[700];
//int arr2[400][750];
//int arr3[400][750];
bool vis[400][750];
int main()
{
    int n,x,k,tmp;
    memset(arr,-1,sizeof(arr));
    scanf("%d",&n);
    k=tmp=n-1;
    //vector<int>adj[500];
    for(int i=0; i<n; i++)
    {
        k=tmp;
        for(int j=0; j<=i; j++)
        {
            scanf("%d",&x);
            //adj[i].push_back(x);
            arr[i][k]=x;
            k+=2;
        }
        tmp--;
    }
    /*for(int i=0; i<n; i++)
    {
        k=tmp;
        for(int j=0; j<adj[i].size(); j++)
        {
            arr[i][k]=arr2[i][k]=arr3[i][k]=adj[i][j];
            k+=2;
        }
        tmp--;
    }*/
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n*2)-1; j++)
        {
            if(arr[i][j]==-1)
                continue;
            if(!vis[i+1][j-1])
            {
                arr[i+1][j-1]+=arr[i][j];
                if(i>0)
                vis[i+1][j-1]=1;
            }
            else
            {
                arr[i+1][j-1]=max(arr[i+1][j-1],arr[i+1][j-1]-arr[i][j-2]+arr[i][j]);
            }
            if(!vis[i+1][j+1])
            {
                arr[i+1][j+1]=arr[i+1][j+1]+arr[i][j];
                if(i>0)
                vis[i+1][j+1]=1;
            }
        }
    }
    sort(arr[n-1],arr[n-1]+(n*2)-1);
    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n*2)-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    printf("%d\n",arr[n-1][(n*2)-2]);
}
/*

for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n*2)-1; j++)
        {
            if(arr[i][j]==-1)
                continue;
            if(!vis[i+1][j-1])
            {
                arr[i+1][j-1]+=arr[i][j];
                if(i>0)
                vis[i+1][j-1]=1;
            }
            else
            {
                arr[i+1][j-1]=max(arr[i+1][j-1],arr[i+1][j-1]-arr[i][j-2]+arr[i][j]);
            }
            if(!vis[i+1][j+1])
            {
                arr[i+1][j+1]=arr[i+1][j+1]+arr[i][j];
                if(i>0)
                vis[i+1][j+1]=1;
            }
            //arr[i+1][j-1]=arr2[i+1][j-1];
            //arr[i+1][j+1]=arr2[i+1][j+1];
        }
    }


*/
