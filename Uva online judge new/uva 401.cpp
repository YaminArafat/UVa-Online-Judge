#include <bits/stdc++.h>
using namespace std;
bool flag[200];
map<int,char>mp_int;
map<char,int>mp_char;
map<char,char>mp_char2;
int main()
{
    //freopen("input10.txt","r",stdin);
    //freopen("output10.txt","w",stdout);
    flag['A'-0]=1;
    //mp_char['A']=
    flag['E'-0]=1;
    mp_char['E']=3;
    flag['H'-0]=1;
    flag['I'-0]=1;
    flag['J'-0]=1;
    mp_char2['J']='L';
    flag['L'-0]=1;
    mp_char2['L']='J';
    flag['M'-0]=1;
    flag['O'-0]=1;
    flag['S'-0]=1;
    mp_char['S']=2;
    flag['T'-0]=1;
    flag['U'-0]=1;
    flag['V'-0]=1;
    flag['W'-0]=1;
    flag['X'-0]=1;
    flag['Y'-0]=1;
    flag['Z'-0]=1;
    mp_char['Z']=5;
    //flag[0]=1;
    flag[1]=1;
    flag[2]=1;
    mp_int[2]='S';
    flag[3]=1;
    mp_int[3]='E';
    flag[5]=1;
    mp_int[5]='Z';
    flag[8]=1;
    string rev,str;
    while (cin>>rev && !cin.eof())
    {
        int p=0,m=1;
        str=rev;
        reverse(rev.begin(),rev.end());
        if(!strcmp(str.c_str(),rev.c_str()))
        {
            p=1;
        }
        int x;
        x=(str.size()/2);
        if(str.size()%2)
        {
            x=(str.size()/2)+1;
        }
        //cout<<x<<endl;
        for(int i=0; i<x; i++)
        {
            if(str[i]-'0'>=1 && str[i]-'0'<=9)
            {
                if(!flag[str[i]-'0'])
                {
                    m=0;
                    break;
                }
                else
                {
                    if(mp_int[str[i]-'0'])
                    {
                        if(str[str.size()-i-1]!=mp_int[str[i]-'0'])
                        {
                            m=0;
                            break;
                        }
                    }
                    else
                    {
                        if(str[str.size()-i-1]-'0'!=str[i]-'0')
                        {
                            m=0;
                            break;
                        }
                    }
                }
            }
            else
            {
                if(!flag[str[i]-0])
                {
                    m=0;
                    break;
                }
                else
                {
                    if(mp_char[str[i]])
                    {
                        if(str[str.size()-i-1]-'0'!=mp_char[str[i]])
                        {
                            m=0;
                            break;
                        }
                    }
                    else if (mp_char2[str[i]])
                    {
                        if(str[str.size()-i-1]!=mp_char2[str[i]])
                        {
                            m=0;
                            break;
                        }
                    }
                    else
                    {
                        if(str[str.size()-i-1]!=str[i])
                        {
                            m=0;
                            break;
                        }
                    }
                }
            }
        }
        if(m && p)
        {
            cout<<str<<" -- is a mirrored palindrome."<<endl;
        }
        else if (!m && p)
        {
            cout<<str<<" -- is a regular palindrome."<<endl;
        }
        else if (m && !p)
        {
            cout<<str<<" -- is a mirrored string."<<endl;
        }
        else
        {
            cout<<str<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/*for(int i=0; i<rev.size(); i++)
        {
            if(rev[i]-'0'>=1 && rev[i]-'0'<=9)
            {
                if(mp[rev[i]-'0'])
                {
                    rev[i]=mp[rev[i]-'0'];
                }
            }
        }*/
