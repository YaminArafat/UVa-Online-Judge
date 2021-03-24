#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for (i=4;i<n;i++)
    {
        if ((i%2==0 || i%4==0 || i%6==0 || i%8==0 || i%9==0 || i%10==0) && ((n-i)%2==0 || (n-i)%4==0 || (n-i)%6==0 || (n-i)%8==0 || (n-i)%9==0 || (n-i)%10==0))
        {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
    return 0;
}
