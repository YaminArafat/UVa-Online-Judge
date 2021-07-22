#include <iostream>
#include <cstdio>
#include <cstdlib>
#define MAX 32768
using namespace std;
bool flag[MAX];
int arr[MAX];
void seive()
{
    for (int i=3;i*i<=MAX;i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i;j<=MAX;j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    arr[4]=1;
    for(int i=6;i<=MAX;i+=2)
    {
        int count=0;
        for(int j=3;j<=i/2;j+=2)
        {
            if(!flag[j] && !flag[i-j])
            {
                count++;
            }
        }
        arr[i]=count;
    }
}
int main()
{
    int n;
    seive();
    while(scanf("%d",&n)==1 && n)
    {
        printf("%d\n",arr[n]);
    }
    return 0;
}
