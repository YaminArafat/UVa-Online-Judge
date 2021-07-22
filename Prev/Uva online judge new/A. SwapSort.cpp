#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0,temp,f=0;
    pair<int,int>p;
    vector<pair<int,int> >vec;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        int maxx=-1000000001;
        for(j=i+1; j<n; j++)
        {
            {
                if(arr[i]>arr[j] && (arr[i]-arr[j])>maxx)
                {
                    maxx=arr[i]-arr[j];
                    temp=j;
                    f=1;
                }
            }
        }
        if(f)
        {
            int temp2=arr[i];
            arr[i]=arr[temp];
            arr[temp]=temp2;
            f=0;
            count++;
            p.first=i;
            p.second=temp;
            vec.push_back(p);
        }
    }
    cout<<count<<endl;
    if(count)
    {
        for(i=0; i<vec.size(); i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
    }
    return 0;
}
