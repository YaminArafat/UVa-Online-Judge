#include <bits/stdc++.h>
#define mx 1000001
using namespace std;
int phi[mx+5];
bool flag[mx+5];
void euler()
{
    for(int i=1; i<=mx; i++)
    {
        phi[i]=i;
    }
    for(int i=2; i<=mx; i++)
    {
        if(!flag[i])
        {
            for(int j=i; j<=mx; j+=i)
            {
                flag[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
int main()
{
    int t,n;
    euler();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",phi[n]);
    }
    return 0;
}
