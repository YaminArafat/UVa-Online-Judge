#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int yr,i;
    cin>>yr;
    for (i=yr+1;i<=9000;i=i+5)
    {
        if (i%10 != i%100 && i%100 != i%1000 && i%10 != i%1000 && i%1000 != i/1000 && i%10 != i/1000 && i%100 != i/1000)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
