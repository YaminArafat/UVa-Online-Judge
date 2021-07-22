#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int m,i,j,count,a,b,f=1;
    string str;
    cin>>str;
    cin>>m;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
        {
            arr[i]=arr[i-1]+1;
        }
        else
            arr[i]=arr[i-1];
    }
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        cout<<arr[b-1]-arr[a-1]<<endl;
    }
    return 0;
}
