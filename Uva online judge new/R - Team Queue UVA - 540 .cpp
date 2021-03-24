#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input10.txt","r",stdin);
    freopen("output10.txt","w",stdout);
    int t,c=0;
    while(scanf("%d",&t)==1 && t)
    {
        printf("Scenario #%d\n",++c);
        queue<int>q;
        while(t--)
        {
            int n,x;
            scanf("%d",&n);
            while(n--)
            {
                scanf("%d",&x);
                q.push(x);
            }
        }
        while(1)
        {
            string s;
            cin>>s;
            if(s=="STOP")
                break;
            else if (s=="ENQUEUE")
            {
                int e;
                scanf("%d",&e);
                q.push(e);
            }
            else
            {
                printf("%d\n",q.front());
                q.pop();
            }
        }
        printf("\n");
    }
    return 0;
}
