#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int link=0,pearl=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-')
        {
            link++;
        }
        else
        {
            pearl++;
        }
    }
    if((link==s.size())||(pearl==s.size()))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(link%pearl==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
