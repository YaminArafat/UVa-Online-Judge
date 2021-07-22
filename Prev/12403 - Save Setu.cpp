#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    long long int k,sum=0;
    int Tc,i;

    string dr;
    cin>>Tc;
    for (i=1; i<=Tc; i++)
    {
        cin>>dr;
        if (dr=="donate")
        {
            cin>>k;
            sum=sum+k;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
