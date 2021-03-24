#include <stdio.h>
int main()
{
    long long int n,k,i,j;
    scanf("%lld %lld",&n,&k);
    long long int str[n];
    if (n%2==0)
    {
        for (i=1,j=0; i<=n,j<n/2; i=i+2,j++)
        {
            str[j]=i;
        }
        str[j]='\0';
        for (i=2,j=n/2; i<=n,j<n; i=i+2,j++)
        {
            str[j]=i;
        }
        str[j]='\0';
    }
    else
    {
        for (i=1,j=0; i<=n,j<(n/2)+1; i=i+2,j++)
        {
            str[j]=i;
        }
        str[j]='\0';
        for (i=2,j=(n/2)+1; i<=n,j<n; i=i+2,j++)
        {
            str[j]=i;
        }
        str[j]='\0';
    }
    printf("%lld\n",str[k-1]);
    return 0;
}
