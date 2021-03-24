#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main()
{
    long long int total,k,t,i;
    char str1[50];
    //freopen("in.txt","r",stdin);
    while(scanf("%lld",&t)==1)
    {
        total=0;
        for(i=1;i<=t;i++)
        {
            scanf("%s",&str1);
            if(strcmp(str1,"donate")==0)
            {
                scanf("%lld",&k);
                total+=k;
            }
            else
                printf("%lld\n",total);
        }
    }
    return 0;
}

Posted by shaishab roy at 8:26 PM
