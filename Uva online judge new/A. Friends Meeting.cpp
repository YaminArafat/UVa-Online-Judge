#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,j=0,k=0,i;
    cin>>a>>b;
    int m=(a+b)/2;
    if(a<b)
    {
        for(i=a;i<=m;i++)
        {
            sum+=j;
            j++;

        }
        for(i=m;i<=b;i++)
        {
            sum+=k;
            k++;

        }
    }
    else
    {
        for(int i=b;i<=m;i++)
        {
            sum+=j;
            j++;
        }
        for(i=m;i<=a;i++)
        {
            sum+=k;
            k++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
