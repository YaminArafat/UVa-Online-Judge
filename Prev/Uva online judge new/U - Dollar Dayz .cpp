#include <bits/stdc++.h>
using namespace std;
//typedef long long int ll;
int way[1009];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int coin[k+5];
    for(int i=1;i<=k; i++)
    {
        coin[i]=i;
    }
    way[0]=1;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>=coin[i])
                way[j]=way[j]+way[j-coin[i]];
        }
    }
    printf("%d\n",way[n]);
    return 0;
}
