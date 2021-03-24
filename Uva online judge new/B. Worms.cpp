#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,i,j,m,k=0,f=0,sum=0;
    scanf("%d",&n);
    int arr_p[n];
    //int arr_s[n];
    int arr_pair[2*n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_p[i]);
        //sum+=arr_p[i];
        //arr_s[i]=sum;
    }
    scanf("%d",&m);
    int arr_j[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr_j[i]);
    }
    for(i=1,j=0; j<n; i+=arr_p[j],j++)
    {
        arr_pair[k++]=i;
        sum+=arr_p[j];
        arr_pair[k++]=sum;
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<k-1; i+=2)
        {
            f++;
            if(arr_j[j]>=arr_pair[i] && arr_j[j]<=arr_pair[i+1])
            {
                printf("%d\n",f);
                break;
            }
            //cout<<arr_pair[i]<<endl;
        }
        f=0;
    }
    return 0;
}
