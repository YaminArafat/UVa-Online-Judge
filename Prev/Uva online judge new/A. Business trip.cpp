#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,sum=0,c=0,f=0;
    int arr[12];
    cin>>k;
    for(i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    for(i=11;i>=0;i--)
    {
        if(sum>=k)
        {
            cout<<c<<endl;
            f=1;
            break;
        }
        sum+=arr[i];
        c++;
        if(sum>=k)
        {
            cout<<c<<endl;
            f=1;
            break;
        }
    }
    if(!f)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
