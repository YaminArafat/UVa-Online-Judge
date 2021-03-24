#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,b;
    int report=0;
    string a;
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>a;
        if(a=="donate"){
            cin>>b;
            report=report+b;
        }
        else
            printf("%d\n", report);
    }
    return 0;
}
