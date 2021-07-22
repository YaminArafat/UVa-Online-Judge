#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<'a'+1;
    int n,k;
    cin>>n>>k;
    string input;
    cin>>input;
    set<char>myset;
    for(int i=0; i<n; i++)
    {
        myset.insert(input[i]);
    }
    set<char>::iterator it;
    vector<char>vec;
    bool available[200]= {false};
    for( it = myset.begin(); it!=myset.end(); ++it)
    {
        vec.push_back(*it);
        available[*it]=true;
    }
    sort(vec.begin(),vec.end());
    if(k>n)
    {
        cout<<input;
        for(int i=0; i<k-n; i++)
        {
            cout<<vec[0];
        }
        cout<<endl;
        return 0;
    }
    bool f=false;
    int j;
    for(j=k-1; j>=0; j--)
    {
        for(int i=1; i<26; i++)
        {
            if(input[j]+i>122)
                break;
            if(input[j]<'z' && available[input[j]+i])
            {
                input[j]+=i;
                f=true;
                break;
            }
        }
        if(f)
            break;
    }
    if(!f)
    {
        cout<<vec[vec.size()-1];
        for(int i=1; i<k; i++)
        {
            cout<<vec[0];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0; i<k; i++)
        {
            if(i<=j)
                cout<<input[i];
            else
                cout<<vec[0];
        }
        cout<<endl;
    }
    return 0;
}
/*if(count<=k)
    {
        int i=0;
        while(int i<=count+1)
        {
            cout<<c;
        }
    }*/
