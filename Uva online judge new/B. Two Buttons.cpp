#include <iostream>
using namespace std;
int main()
{
    int n,m,ans,count=0;
    cin>>n>>m;
    if(n<m)
    {
        if(m%2)
        {
            count++;
            m++;
        }
        while (m>n)
        {
            if(m%2)
            {
                count++;
                m++;
            }
            m/=2;
            count++;
        }
        ans=(n-m)+count;
    }
    else
    {
        ans=n-m;
    }
    cout<<ans<<endl;
    return 0;
}


/*if(m<=n*2)
        {
            ans=n-(m/2)+1;
        }
        else
        {
            if(m%2)
            {
                int mn=1000000000,x,y;
                for(int i=n; i>=1; i--)
                {
                    int count=0;
                    for(int j=i;; j*=2,count++)
                    {
                        if(j>=m)
                        {
                            x=j-m;
                            y=n-i;
                            count+=x+y;
                            break;
                        }
                    }
                    if(count<mn)
                    {
                        mn=count;
                    }
                }
                ans=mn;
            }
            else
            {
                int count=0;
                int j=n;
                while(j!=(m/2))
                {
                    if(j<m/2)
                    {
                        j*=2;
                        count++;
                        if((m/2)%j<=2)
                        {
                            j--;
                            count++;
                        }
                    }
                    else if(j>m/2)
                    {
                        j--;
                        count++;
                    }
                }
                ans=count+1;
            }
        }*/
