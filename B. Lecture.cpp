#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sir,me;
    cin>>sir>>me;
    string sir_,one,two;
    pair<string ,string>one_two;
    vector<pair<string ,string> >vec_me;
    vector<string>vec_sir;
    for(int i=0;i<me;i++)
    {
        cin>>one>>two;
        one_two.first=one;
        one_two.second=two;
        vec_me.push_back(one_two);
    }
    for(int i=0;i<sir;i++)
    {
        cin>>sir_;
        vec_sir.push_back(sir_);
    }
    for(int i=0;i<sir;i++)
    {
        string str1=vec_sir[i];
        for(int j=0;j<me;j++)
        {
            string str2=vec_me[j].first;
            if(!(strcmp(str1.c_str(),str2.c_str())))
            {
                string str3=vec_me[j].second;
                if(str3.length()<str2.length())
                {
                    vec_sir[i]=str3;
                }
                else
                {
                    vec_sir[i]=str2;
                }
            }
        }
    }
    vec_me.clear();
    for(int i=0;i<sir;i++)
    {
        cout<<vec_sir[i]<<" ";
    }
    vec_sir.clear();
    cout<<endl;
    return 0;
}
