#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    int n,i,j,m,sum=0;
    pair<int,int>pair_;
    vector<pair<int,int> >arr_s;
    scanf("%d",&n);
    int arr_p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_p[i]);
    }
    scanf("%d",&m);
    int arr_j[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr_j[i]);
    }
    for(i=1,j=0; j<n; i+=arr_p[j],j++)
    {
        pair_.first=i;
        sum+=arr_p[j];
        pair_.second=sum;
        arr_s.push_back(pair_);
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<arr_s.size(); i++)
        {
            if(arr_j[j]>=arr_s[i].first && arr_j[j]<=arr_s[i].second)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}

