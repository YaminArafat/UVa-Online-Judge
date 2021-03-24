#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int n,i,j,x=0;
    char str[100001];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>str[i];
        for (j=0;j<strlen(str);j++)
        {
            if (str[j]<str[j+1])
            {
                x++;
            }
        }
    }
    cout<<strlen(str)-x+2<<endl;
    x=0;
    return 0;
}
