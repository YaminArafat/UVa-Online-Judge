#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char str[6];
    int j=0;
    while (1)
    {
        gets(str);
        if (str[0]=='*')
        {
            break;
        }
        if (str[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++j);
        }
        else if (str[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++j);

        }
    }
    return 0;
}
