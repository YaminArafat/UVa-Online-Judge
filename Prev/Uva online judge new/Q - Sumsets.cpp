#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <math.h>
//#include <utility>
#include <vector>
//#include <ctime>
#define ll long long
using namespace std;
/*ll dp[20][9999999];
ll func(ll i,ll amount,ll n,ll k)
{
    if(i>=n)
    {
        if(amount==k)
        {
            return 1;
        }
        else
            return 0;
    }
    //cout<<i<<" "<<amount<<" "<<dp[i][amount]<<endl;
    /*if(amount==k)
        return 1;
    else if (amount>k)
        return 0;

    if(dp[i][amount]!=-1)
        return dp[i][amount];
    ll ret1=0,ret2=0;
    //cout<<ret2<<endl;
    if(amount+vec[i]<=k)
        ret1=func(i,amount+vec[i],n,k);
    ret2=func(i+1,amount,n,k);
    //cout<<"ret1 = "<<ret1<<" "<<endl<<"ret2 = "<<ret2<<" "<<endl<<i<<" "<<amount<<" "<<dp[i][amount]<<endl;
    return dp[i][amount]=(ret1+ret2)%1000000000;
    //return dp[n-1][k-1];
}*/
ll way[1000009];
int main()
{
    ll n;
    scanf("%lld",&n);
    vector<ll>vec;
    //int start_s=clock();
    //vec.push_back(0);
    //memset(dp,-1,sizeof(dp));
    for(ll i=0; ; i++)
    {
        ll x=powl(2,i);
        if(x>n)
            break;
        else
        {
            vec.push_back(x);
        }
    }
    way[0]=1;
    for(ll i=0; i<vec.size(); i++)
    {
        for(ll j=1; j<=n; j++)
        {
            if(j>=vec[i])
                way[j]=((way[j]%1000000007)+(way[j-vec[i]])%1000000007)%1000000007;
        }
    }
    //cout<<vec.size()<<endl;;
    //for(ll i=0;i<vec.size();i++)
    //cout<<vec[i]<<endl;
    //return 0;
    //if(n>10000)
    //ll x=func(0,0,10,1000);
    printf("%lld\n",way[n]);
    //int stop_s=clock();
    //auto duration = duration_cast<microseconds>(stop - start);

//    cout << "Time taken by function: "
//         <<  (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<< " microseconds" << endl;

    return 0;
}
/*#include <ctime>// include this header

in main()
1
2
3
4
int start_s=clock();
	// the code you wish to time goes here
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
*/
