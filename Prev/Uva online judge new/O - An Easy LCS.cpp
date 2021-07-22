#include <bits/stdc++.h>
using namespace std;
/*string lcs(int i,int j,string a,string b)
{
    if(i==a.size()||j==b.size())
        return NULL;
    if(a[i]==b[j])
        return a[i]+mlcs(i+1,j,a,b);
    else
        return max(mlcs(i+1,j,a,b),mlcs(i,j+1,a,b));
}
string mlcs(int i,int j,string a,string b)
{
    if(ans[i][j]==NULL)
        ans[i][j]=lcs(i,j,a,b);
    return ans[i][j];
}*/
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        string a,b,s="";
        //scanf("\n");
        //getline(cin,y);
        cin>>a>>b;
        int alen=a.size(),blen=b.size();
        string ans[alen+5][blen+5];
        int dp[alen+5][blen+5];
        for(int i=0; i<=alen; i++)
        {
            for(int j=0; j<=blen; j++)
            {
                if(!i||!j)
                {
                    dp[i][j]=0;
                    ans[i][j]="";
                }
                else if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    ans[i][j]=ans[i-1][j-1]+a[i-1];
                }
                else if(dp[i-1][j]>dp[i][j-1])
                {
                    dp[i][j]=dp[i-1][j];
                    ans[i][j]=ans[i-1][j];
                }
                else if(dp[i-1][j]<dp[i][j-1])
                {
                    dp[i][j]=dp[i][j-1];
                    ans[i][j]=ans[i][j-1];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                    ans[i][j]=min(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        /*for(int i=0; i<=alen; i++)
        {
            for(int j=0; j<=blen; j++)
            {

                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }*/
        //cout<<ans[alen][blen]<<endl;
        //return 0;
        if(!dp[alen][blen])
            printf("Case %d: :(\n",++c);
        else
        {
            printf("Case %d: ",++c);
            cout<<ans[alen][blen]<<endl;
        }
    }
    return 0;
}
/*int i=alen,j=blen;
            // char s[x+5];
            //s[x]='\0';
            //cout<<x<<endl;
            while(i>0 && j>0)
            {
                if(a[i-1]==b[j-1])
                {
                    s+=a[i-1];
                    i--;
                    j--;
                    //x--;
                }
                else if(ans[i-1][j]>ans[i][j-1])
                {
                    i--;
                }
                else if(ans[i-1][j]<ans[i][j-1])
                {
                    j--;
                }
                else
                {
                    /*if(a[i-1]>b[j-1])
                        i--;
                    else
                        j--;
                    i--;
                    j--;
                }
            }*/
