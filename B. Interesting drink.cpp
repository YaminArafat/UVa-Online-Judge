#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,mx=0;
    scanf("%d",&n);
    int arr_price[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_price[i]);
        if(arr_price[i]>mx)
        {
            mx=arr_price[i];
        }
    }
    sort(arr_price,arr_price+n);
    scanf("%d",&q);
    int my_money[q];
    for (i=0; i<q; i++)
    {
        scanf("%d",&my_money[i]);
    }
    for(i=0; i<q; i++)
    {
        if(my_money[i]>=mx)
        {
            printf("%d\n",n);
        }
        else
        {
            int high=n-1,low=0;
            int mid=(high+low)/2;
            while(low<=high)
            {
                if(arr_price[mid]>my_money[i])
                {
                    high=mid-1;
                }
                else if(arr_price[mid]<=my_money[i])
                {
                    low=mid+1;
                }
                mid=(high+low)/2;
                if(high==low)
                {
                    printf("%d\n",mid+1);
                }
            }

        }
    }
    return 0;
}
/*
            int count=0;
            for (j=0;j<n;j++)
            {
                if(my_money[i]>=arr_price[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }*/
