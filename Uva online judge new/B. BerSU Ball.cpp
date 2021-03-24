#include<bits/stdc++.h>
using namespace std;
bool flag[100];
int main()
{
    int n,m,i,j,count=0;
    cin>>n;
    int arr_b[n];
    for(i=0; i<n; i++)
    {
        cin>>arr_b[i];
    }
    cin>>m;
    int arr_g[m];
    for (i=0; i<m; i++)
    {
        cin>>arr_g[i];
    }
    sort(arr_b,arr_b+n);
    sort(arr_g,arr_g+m);
    if(n>m)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(abs(arr_g[i]-arr_b[j])<=1 && !flag[j])
                {
                    count++;
                    flag[j]=1;
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(abs(arr_b[i]-arr_g[j])<=1 && !flag[j])
                {
                    count++;
                    flag[j]=1;
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
