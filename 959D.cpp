#include <bits/stdc++.h>
#define mx 100000
using namespace std;
bool flag[mx+5];
//vector<int>vec;
void seive()
{
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=mx; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    for(int i=4; i<=mx; i+=2)
    {
        flag[i]=1;
    }
    /*for(int i=3; i<=mx; i+=2)
    {
        if(!flag[i])
        {
            //cout<<i<<endl;
            vec.push_back(i);
        }
    }*/
}
int main()
{
    int n,i,j,gcd;
    seive();
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        /*if(i==1)
        {
            gcd=__gcd(arr[i],arr[i-1]);
        }
        else if (i>1)
        {
            gcd=__gcd(gcd,arr[i]);
        }*/
    }
    /*if(gcd==1)
    {
        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        return 0;
    }*/
    //arr2[0]=arr[0];
    for(i=0; i<n; i++)
    {
        for(j=arr[i]; j<=mx; j++)
        {
            if((!flag[j] && arr[i]<=j)||__gcd(arr[i],arr[i+1])==1)
            {
                arr2[i]=j;
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}
