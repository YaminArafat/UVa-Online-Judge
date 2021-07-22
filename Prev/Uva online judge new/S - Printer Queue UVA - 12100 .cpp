#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m,x,val;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d",&n,&m);
        int mx=0,cnt=0;
        queue<pair<int,int> >q;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            vec.push_back(x);
            q.push(make_pair(x,i==m?1:0));
        }
        sort(vec.begin(),vec.end());
        while(1)
        {
            pair<int,int>p;
            p=q.front();
            if(p.first<vec.back())
            {
                //y=q.front();
                q.pop();
                q.push(p);
            }
            else if (p.first==vec.back() && p.second==1)
            {
                printf("%d\n",++cnt);
                break;
            }
            else
            {
                q.pop();
                vec.pop_back();
                cnt++;
            }
        }
    }
    return 0;
}
