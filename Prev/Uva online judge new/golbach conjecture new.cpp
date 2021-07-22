#include <bits/stdc++.h>
bool st[1000000];
using namespace std;
vector<int>a;
void seive(void)
{
    for (int i=3; i*i<=1000000; i+=2)
        {
            if (st[i]==0)
            {
                for (int j=i*i; j<=1000000; j+=2*i)
                {
                    st[j]=1;
                }
            }
        }
}
int main()
{
    int n,i,f;
    seive();
    while(scanf("%d",&n)==1)
    {
        f=0;
        if (n==0)
        {
            break;
        }
        for(i=3; i<=n; i+=2)
        {
            if (st[i]==0 && st[n-i]==0)
            {
                printf("%d = %d + %d\n",n,i,n-i);
                f=1;
                break;
            }
        }
        if (f==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}

