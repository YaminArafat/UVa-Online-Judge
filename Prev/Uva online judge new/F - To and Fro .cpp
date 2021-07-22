/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        string main;
        cin>>main;
        vector<string>vec;
        for(int i=0; i<main.size(); i+=n)
        {
            string tmp=main.substr(i,n);
            vec.push_back(tmp);
        }

        for(int i=1; i<vec.size(); i+=2)
        {
            reverse(vec[i].begin(),vec[i].end());
        }
        /*for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<endl;
        }*/
/*string ans;
for(int j=0; j<n; j++)
{
    for(int i=0; i<vec.size(); i++)
    {
        ans+=vec[i][j];
    }
}
cout<<ans<<endl;
}
return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int m,n,t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&m,&n);
        int ans;
        if((m==2 && n==3)||(m==3 && n==2))
            ans=4;
        else if((m<3&&n<=3)||(m<=3&&n<3)||(m<3&&n<3))
            ans=n*m;
        else if(m==1||n==1)
            ans=n*m;
        else if ((m==2&&n!=2)||(m!=2&&n==2))
        {
            ans=max(n,m);
            if(ans%2)
                ans--;
            if((n*m)%8)
            {
                ans+=2;
            }
        }
        else if(n%2==0)
        {
            ans=(m*n)/2;
        }
        else
        {
            if(m%2==0)
            {
                ans=(n*m)/2;
            }
            else
            {
                ans=((n*m)+1)/2;
            }
        }
        printf("%d\n",ans);
         //printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
    }
    return 0;
}
