#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0,i;
    cin>>n>>m;
    for (i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            count++;
        }
        if(i==n)
        {
            n+=count;
            count=0;
        }
    }
    cout<<n<<endl;
    return 0;
}
