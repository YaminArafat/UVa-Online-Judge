#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,a,b,x,sum=0,temp,ans,cnt=0,mn=LONG_LONG_MAX;
    scanf("%lld %lld %lld %lld",&n,&k,&a,&b);
    x=n;
    if(k>x || k==1)
        ans=(x-1)*a;
    else
    {
        if(x%k)
        {
            sum+=((x%k)*a);
            x-=(x%k);
        }
        temp=x;
        //cout<<sum<<" "<<temp<<endl;
        while(1)
        {
            while(!(temp%k))
            {
                temp/=k;
                cnt++;
                mn=min(mn,sum+(cnt*b)+(temp-1)*a);
                //cout<<a<<" "<<b<<" "<<cnt<<" "<<temp<<" "<<mn<<endl;
            }
            if(temp>k)
            {
                //cout<<temp<<endl;
                sum+=((temp%k)*a);
                temp-=(temp%k);
            }
            else
                break;
        }
        //cout<<sum+(cnt*b)+(temp-1)*a<<endl;
        ans=min(min((a*(n-1)),mn),min(sum+(a*(x-1)),sum+(cnt*b)+(temp-1)*a));
    }
    printf("%lld\n",ans);
    return 0;
}
/*if(x%k==0 && x>=b)
{
    x%=k;
    sum+=b;
}
else
{
    if(x<b)
    {
        sum+=(x)*a;
        break;
    }
    else
    {
        x-=1;
        sum+=a;
    }
}*/
