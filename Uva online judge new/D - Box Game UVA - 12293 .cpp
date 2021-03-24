#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    int cnt=0;
    while(1)
    {
        if(n%2)
            n=(n/2)+1;
        else
            n=n/2;
        cnt++;
        if(n==2)
        {
            return cnt;
        }
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        if(n==2)
        {
            printf("Alice\n");
        }
        else if(func(n)%2==0)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
    }
    return 0;
}
