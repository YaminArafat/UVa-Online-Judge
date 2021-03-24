#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[250][250];
//vector<int>arr[700];
//int arr2[400][750];
//int arr3[400][750];
bool vis[250][750];
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,k,tmp,f=0,i;
        memset(arr,-1,sizeof(arr));
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        k=tmp=n-1;
        //vector<int>adj[500];
        for(i=0; i<n; i++)
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
        k=tmp=1;
        for(int p=n-1; p>0; p--)
        {
            k=tmp;
            for(int q=0; q<p; q++)
            {
                scanf("%d",&x);
                arr[i][k]=x;
                k+=2;
            }
            tmp++;
            i++;
        }
        /*for(int i=0; i<(n*2)-1; i++)
        {
            for(int j=0; j<(n*2)-1; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;*/
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
        for(int i=0; i<(n*2)-2; i++)
        {
            for(int j=0; j<(n*2)-1; j++)
            {
                if(arr[i][j]==-1)
                    continue;
                if((j-1)>=0 && !vis[i+1][j-1])
                {
                    arr[i+1][j-1]+=arr[i][j];
                    if(i>0)
                        vis[i+1][j-1]=1;
                }
                else
                {
                    arr[i+1][j-1]=max(arr[i+1][j-1],arr[i+1][j-1]-arr[i][j-2]+arr[i][j]);
                }
                if((j+1)<(n*2)-1 && !vis[i+1][j+1])
                {
                    arr[i+1][j+1]=arr[i+1][j+1]+arr[i][j];
                    if(i>0)
                        vis[i+1][j+1]=1;
                }
            }
        }
        sort(arr[(n*2)-2],arr[(n*2)-2]+(n*2)-1);
        /*for(int i=0; i<(n*2)-1; i++)
        {
            for(int j=0; j<(n*2)-1; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/
        printf("Case %d: %d\n",++c,arr[(n*2)-2][(n*2)-2]);
    }
    return 0;
}
