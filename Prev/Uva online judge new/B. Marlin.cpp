#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    if((2*(n-2))<k)
    {
        printf("NO\n");
        return 0;
    }
    /*if((k>(n-2))&&(k%(n-2))!=1 && (k%(n-2))%2)
    {
        printf("NO\n");
        return 0;
    }*/
    printf("YES\n");
    for(int i=0;i<n;i++)
    {
        printf(".");
    }
    printf("\n.");
    for(int i=0;i<n-2;i++)
    {
        if(k)
        {
            printf("#");
            k--;
        }
        else
        {
            printf(".");
        }
    }
    printf(".\n");
    printf(".");
    for(int i=0;i<n-2;i++)
    {
        if(k)
        {
            printf("#");
            k--;
        }
        else
        {
            printf(".");
        }
    }
    printf(".\n");
    for(int i=0;i<n;i++)
    {
        printf(".");
    }
    printf("\n");
    return 0;
}
