#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,i,k,count,m;
    int arr[1020];
    float avg,x,sum=0,d;
    while ((scanf("%d",&n)==1))
    {
        for (i=1; i<=n; i++)
        {
            avg=0;
            count=0;
            sum=0;
            scanf("%f",&x);
            for (k=0; k<x; k++)
            {
                scanf("%d",&arr[k]);

                sum=sum+arr[k];
            }
            avg=sum/x;
            for (m=0; m<x; m++)
            {
                if (avg<arr[m])
                {
                    count=count+1;
                }
            }
            d=(count*100)/x;
            printf("%.3f%%\n",d);
        }
    }
    return 0;
}
