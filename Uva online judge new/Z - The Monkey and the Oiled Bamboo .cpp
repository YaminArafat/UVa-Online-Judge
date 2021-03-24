#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=0,x,temp,mx,ans;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       temp=0,mx=0;
       for(int i=0;i<n;i++)
       {
           scanf("%d",&x);
           if((x-temp)>mx)
           {
               mx=x-temp;
               ans=mx-1;
           }
           else if((x-temp)==ans)
           {
               ans--;
           }
           else if((x-temp)>ans)
           {
               mx++;
               ans=mx;
           }
           temp=x;
       }
       printf("Case %d: %d\n",++c,mx);
    }
    return 0;
}
