#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    int t,n,m;
    /*int arr[100];
    arr['a']=5;
    cout<<arr[98]<<endl;
    /*char c;
    int k;
    scanf("%c %d",&c,&k);
    printf("%d %d\n",c,k);*/
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d\n",&n);
        char ch;
        double val;
        double sum=0;
        double arr[500]={0};
        //map<char,double>mp;
        while(n--)
        {
            scanf("%c%lf\n",&ch,&val);
            //cin>>ch>>val;
            arr[ch]=val;
            //mp[ch]=val;
        }
        scanf("%d\n",&m);
        //char s[10009];
        string s;
        while (m--)
        {
            //scanf(" %[^\n]",s);
            getline(cin,s);
            //gets(s);
            //printf("%s\n",s);
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]==' '||!arr[s[i]])
                    continue;
                //cout<<1<<endl;
                //if(arr[s[i]])
                //{
                    sum+=arr[s[i]];
                //}
            }
        }
        //cout<<sum<<endl;
        printf("%.2lf$\n",sum/100.00);
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d\n",&n);
        char ch;
        double val;
        double sum=0;
        double arr[50000]= {0};
        while(n--)
        {
            scanf("%c%lf\n",&ch,&val);
            arr[ch]=val;
        }
        scanf("%d\n",&m);
        string s;
        while (m--)
        {
            getline(cin,s);
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]==' '||!arr[s[i]])
                    continue;
                sum+=arr[s[i]];
            }
        }
        printf("%.2lf$\n",sum/100.00);
    }
    return 0;
}
*/
