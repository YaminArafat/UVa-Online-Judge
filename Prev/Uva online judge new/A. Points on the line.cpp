#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,j,mx=0,f=0;
    cin>>n>>d;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j]-arr[i]<=d)
            {
                if(j-i+1>mx)
                {
                    mx=j-i+1;
                }
                f=1;
            }
        }
    }
    if(n>1 && f)
        cout<<n-mx<<endl;
    else if (!f)
        cout<<n-1<<endl;
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
