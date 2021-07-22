#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,i,j,k;
    scanf("%lld %lld",&n,&q);
    vector<long long>arr,temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);
        arr.push_back(k);
    }
    //sort(arr.begin(),arr.end());
    for(i=0; i<q; i++)
    {
        scanf("%lld",&k);
        long long gcd=__gcd(arr[0]+k,arr[1]+k);
        for (j=2; j<n; j++)
        {
            gcd=__gcd(gcd,arr[j]+k);
        }
        printf("%lld\n",gcd);
    }
    return 0;
}
