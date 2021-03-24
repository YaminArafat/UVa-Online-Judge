#include <iostream>
using namespace std;
int main()
{
    int n,i,mx=0,count=0,mn=1000000001,k=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=mx)
        {
            if(arr[i]>mx)
            {
                count=0;
            }
            mx=arr[i];
            count++;
        }
        if(arr[i]<=mn)
        {
            if(arr[i]<mn)
            {
                k=0;
            }
            mn=arr[i];
            k++;
        }
    }
    if(count>1||k>1)
        cout<<mx-mn<<" "<<count*k<<endl;
    else
        cout<<mx-mn<<" "<<count<<endl;
    return 0;
}
