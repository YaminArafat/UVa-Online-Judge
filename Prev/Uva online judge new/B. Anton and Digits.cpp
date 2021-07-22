#include <iostream>
using namespace std;
int main()
{
    int k2,k3,k5,k6,x,y,z;
    cin>>k2>>k3>>k5>>k6;
    x=min(k2,min(k5,k6));
    y=k2-x;
    z=min(k3,y);
    cout<<(x*256)+(z*32)<<endl;
    return 0;
}
