#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    int n,x,i,j,sum=0,k;
    cin>>n>>x;
    for (i=0; n/x!=1; i++)
    //{
        k=n/x;
        if (k>=x)
        {
            j=k/x;
            sum=sum+k+j;
        }
        else
        //{
            sum=sum+k;
        //}
    //}
    cout<<sum+n<<endl;
    return 0;
}
