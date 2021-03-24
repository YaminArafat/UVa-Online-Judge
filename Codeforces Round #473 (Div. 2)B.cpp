#include <bits/stdc++.h>
using namespace std;
//vector<int>vec[100005];
map<string,long long>mp1;
//map<string,int>mp2;
vector<long long>arr3;
//bool flag[100005];
int main()
{
    long long n,k,m,i,j,x,y,sum=0,c=0,temp,d=1,e;
    scanf("%lld %lld %lld",&n,&k,&m);
    long long arr[n];
    long long arr2[n];
    string str,str2;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        mp1[str]+=i;
        //cout<<mp[i+1]<<endl;
    }
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
        //arr2[i]=arr[i];
    }
    for(i=0; i<k; i++)
    {
        scanf("%lld",&x);
        //int i=0;
        for(j=0; j<x; j++)
        {
            scanf("%d",&y);
            arr3.push_back(y);
            if(j>0)
            {
                //if(d--)flag[temp]=1;//vec[temp].push_back(temp);
                //vec[temp].push_back(y);
                //flag[y]=1;
                e=min(e,arr[y]);
                //if(arr[temp])
            }
            else
            {
                temp=y;
                e=arr[y];
            }
        }
        for(int f=0; f<arr3.size(); f++)
        {
            arr[arr3[f]]=e;
        }
        arr3.clear();
    }
    for(i=1; i<=m; i++)
    {
        cin>>str2;
        //mp1[str2]+=i;
        sum+=arr[mp1[str2]];
        //cout<<mp[i+1]<<endl;
    }
    printf("%lld\n",sum);
    return 0;
}
