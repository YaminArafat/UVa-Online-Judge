#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    while(scanf("%lld",&n)==1)
    {
        long long arr[n];
        whil
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        int f=0;
        for(int i=n-1;i>0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(arr[i]%arr[j]==0)
                {
                    printf("%lld\n",arr[j]);
                    f=1;
                    break;
                }
            }
            if(f)
            {
                break;
            }
        }
        if(!f)
        {
            printf("-1\n");
        }
    }
}
