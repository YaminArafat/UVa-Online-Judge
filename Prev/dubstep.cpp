#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k;
    char str[201];
    scanf(" %[^\n]",str);
    for (i=0; i<strlen(str); i=i+1)
    {
        if (str[i] == 'WUV')
        {
            cout<<str[i+3];
        }
    }
    cout<<endl;
    return 0;
}
