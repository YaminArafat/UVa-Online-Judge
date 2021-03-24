#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,l;
    cin>>n>>a>>b;
    l=n/2;
    /*for(i=1,j=2; i<=n-1,j<=n; i+=2; j+=2)
    {

    }*/
    pair<int,int>p;
    vector<pair<int,int> >vec;
    for(i=1; i<=n; i+=2)
    {
        p.first=i;
        p.second=i+1;
        vec.push_back(p);
    }
    for(int j=1; j<=l; j++)
    {
        for(i=0; i<vec.size()-1; i+=3)
        {
            if(vec[i].first ==a && vec[i].second ==b)
            {
                if(vec.size()==1)
                {
                    cout<<"Final!"<<endl;
                    break;
                }
                else
                {
                    cout<<j<<endl;
                }
            }
            else if(vec[i].second ==a)
            {
                if(vec[i+1].second ==b || vec[i+1].first ==b)
                {
                    vec.erase(vec.begin()+i+1);
                    vec[i].first=b;
                    if(vec.size()==1)
                    {
                        cout<<"Final!"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<j<<endl;
                    }
                }
                else
                {
                    vec[i].first=vec[i+1].second;
                    vec.erase(vec.begin()+i+1);
                }
            }
            else if(vec[i].first ==a)
            {
                if(vec[i+1].second ==b || vec[i+1].first ==b)
                {
                    vec.erase(vec.begin()+i+1);
                    vec[i].second=b;
                    if(vec.size()==1)
                    {
                        cout<<"Final!"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<j<<endl;
                    }
                }
                else
                {
                    vec[i].second=vec[i+1].second;
                    vec.erase(vec.begin()+i+1);
                }
            }
            else if(vec[i].second ==b)
            {
                if(vec[i+1].second ==a || vec[i+1].first ==a)
                {
                    vec.erase(vec.begin()+i+1);
                    vec[i].first=a;
                    if(vec.size()==1)
                    {
                        cout<<"Final!"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<j<<endl;
                    }
                }
                else
                {
                    vec[i].first=vec[i+1].second;
                    vec.erase(vec.begin()+i+1);
                }
            }
            else if(vec[i].first ==b)
            {
                if(vec[i+1].second ==a || vec[i+1].first ==a)
                {
                    vec.erase(vec.begin()+i+1);
                    vec[i].second=a;
                    if(vec.size()==1)
                    {
                        cout<<"Final!"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<j<<endl;
                    }
                }
                else
                {
                    vec[i].second=vec[i+1].second;
                    vec.erase(vec.begin()+i+1);
                }
            }
        }
    }
}




/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,l,count=0;
    cin>>n>>a>>b;
    l=n/2;
    if((a>l && b>l)||(a<l && b<l))
    {
        if(a<b)
        {
            if(a%2==0)
            {
                if(a-1==b)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    if(b%2==0)
                    {
                        while(a!=b)
                        {
                            a+=2;
                            count++;
                        }
                    }
                    else
                    {
                        while(a-1!=b)
                        {
                            a+=2;
                            count++;
                        }
                    }
                    cout<<count+1<<endl;
                }
            }
            else
            {
                if(a+1==b)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    if(b%2==0)
                    {
                        while(a+1!=b)
                        {
                            a+=2;
                            count++;
                        }
                    }
                    else
                    {
                        while(a!=b)
                        {
                            a+=2;
                            count++;
                        }
                    }
                    cout<<count+1<<endl;
                }
            }
        }
        else
        {
            if(b%2==0)
            {
                if(b-1==a)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    if(a%2==0)
                    {
                        while(b!=a)
                        {
                            b+=2;
                            count++;
                        }
                    }
                    else
                    {
                        while(b-1!=a)
                        {
                            b+=2;
                            count++;
                        }
                    }
                    cout<<count+1<<endl;
                }
            }
            else
            {
                if(b+1==a)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    if(a%2==0)
                    {
                        while(b+1!=a)
                        {
                            b+=2;
                            count++;
                        }
                    }
                    else
                    {
                        while(b!=a)
                        {
                            b+=2;
                            count++;
                        }
                    }
                    cout<<count+1<<endl;
                }
            }
        }
    }
    else if ((a>=l && b>l)||(a>l && b<=l)||(a>=l&&b<l)||(b>=l&&a<l)||(b>l && a<=l))
    {
        if(a%2==0)
        {
            if(a-1==b)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"Final!"<<endl;
            }
        }
        else if(b%2==0)
        {
            if(b-1==a)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"Final!"<<endl;
            }
        }
    }
    return 0;
}
/*else if ((a>l && b<l)||())
    {
        cout<<"Final!"<<endl;
    }
    else if (b>=l && a<l)
    {
        cout<<"Final!"<<endl;
    }
    else if (b>l && a<=l)
    {
        cout<<"Final!"<<endl;
    }*/
