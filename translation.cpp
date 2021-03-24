#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    int i,j,k=0;
    char str[101];
    char str1[101];
    gets(str);
    gets(str1);
    for (j=strlen(str1)-1; j>=0; j--)
    {
        if (str1[j]==str[strlen(str)-(j+1)])
        {
            k++;
        }
        else
        {
            k=k;
        }
    }
}
if (k==strlen(str))
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}
