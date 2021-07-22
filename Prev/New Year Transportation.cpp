#include <bits/stdc++.h>
using namespace std;
//bool st[30000];
int main()
{
    int n,t,i,f=0,temp=0;
    cin>>n>>t;
    int arr[n-1];
    for(i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        arr[i]=arr[i]+i+1;
    }
    for(i=0; i<n-1;)
    {
        /*if(i>temp)
        {
            break;
        }*/
        i=arr[i]-1;
        /*temp=arr[i]-1;
        if(st[i+1]==0)
        {
            st[i+1]=1;
        }
        else
        {
            break;
        }*/
        if (i+1==t)
        {
            cout<<"YES"<<endl;
            f=1;
            break;
        }
    }
    if (f==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
