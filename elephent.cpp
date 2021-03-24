#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,x,d;
    cin>>x;
    if (x>=5)
    {
        n=x/5;
        if (x%5!=0)
        {
           d=x-(5*n);
           if (d<=4)
           {
               cout<<n+1<<endl;
           }
        }
        else
        {
            cout<<n<<endl;
        }
    }
    else if (x==3 || x==4 || x==2 || x==1)
    {
        cout<<"1"<<endl;
    }
    return 0;
}
