#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
char ary[6];
int counter=0;
while(1)
{
    gets(ary);
    if(ary[0]=='*')
        {
            break;
        }
    else if(ary[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++counter);
        }
    if(ary[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++counter);
        }
}
return 0;
}
