#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t;
    while(scanf("%d",&t)==1 && t)
    {
        int arr[t],cnt=0;
        double val;
        val=((t-1)*(double)t)/2.0;
        val*=6.0;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<t-1;i++)
        {
            for(int j=i+1;j<t;j++)
            {
                if(__gcd(arr[i],arr[j])==1)
                {
                    cnt++;
                }
            }
        }
        if(!cnt)
        {
            printf("No estimate for this data set.\n");
        }
        else
        {
            val/=(double)cnt;
            double ans;
            ans=sqrt((double)val);
            printf("%.6f\n",ans);
        }
    }
    return 0;
}
