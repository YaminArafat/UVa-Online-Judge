#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool st[1001];
int main()
{
    char str[1001];
    gets(str);
    int i,j,count=0;
    for(i=1; i<strlen(str)-1; i+=3)
    {
        if(st[i]==0)
        {
            for (j=i+3; j<strlen(str)-1; j+=3)
            {
                if(str[i]==str[j])
                {
                    st[j]=1;
                }
            }
        }
    }
    for(i=1; i<strlen(str)-1; i+=3)
    {
        if(st[i]==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
