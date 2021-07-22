#include <bits/stdc++.h>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    /*long long int n,i=1;
    cin>>n;
    char x;
    queue<char>p;
    p.push('s');
    p.push('l');
    p.push('p');
    p.push('r');
    p.push('h');
    if (p.size()>=n)
    {
        while (!p.empty())
        {
            if(p.size()==n)
            {
                if(p.front()=='h')
                {
                    cout<<"Sheldon"<<endl;
                }
                else if(p.front()=='r')
                {
                    cout<<"Leonard"<<endl;
                }
                else if(p.front()=='p')
                {
                    cout<<"Penny"<<endl;
                }
                else if(p.front()=='l')
                {
                    cout<<"Rajesh"<<endl;
                }
                else if(p.front()=='s')
                {
                    cout<<"Howard" <<endl;
                }
            }
            p.pop();
        }
    }
    else
    {
        while (i!=n)
        {
            x=p.front();
            p.pop();
            p.push(x);
            p.push(x);
            i++;
        }
        if(p.front()=='s')
        {
            cout<<"Sheldon"<<endl;
        }
        else if(p.front()=='l')
        {
            cout<<"Leonard"<<endl;
        }
        else if(p.front()=='p')
        {
            cout<<"Penny"<<endl;
        }
        else if(p.front()=='r')
        {
            cout<<"Rajesh"<<endl;
        }
        else if(p.front()=='h')
        {
            cout<<"Howard" <<endl;
        }
    }*/
    long long int n,i=0,k=1,j=1;
    cin>>n;
    long long int sarr[n];
    //long long int larr[n];
    //long long int parr[n];
    //long long int rarr[n];
    //long long int harr[n];
    while (i<n)
    {
        for(;;k--)
        {
            sarr[i]=j;
            j++;
            i++;
        }
        k=k*2;
        j+=4;
    }
    for(i=0;i<n;i++)
    {
        cout<<sarr[i]<<" ";
    }
    return 0;
}
