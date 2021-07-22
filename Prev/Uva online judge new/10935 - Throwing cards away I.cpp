#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    int n,i,x;
    queue<int>q;
    while (cin>>n)
    {
        if (n==0)
        {
            break;
        }
        for(i=1; i<=n; i++)
        {
            q.push(i);
        }
        cout<<"Discarded cards:";
        while (q.size()>1)
        {
            cout<<" "<<q.front();
            if(q.size()>2)
            {
                cout<<",";
            }
            q.pop();
            x=q.front();
            q.pop();
            q.push(x);

        }
        cout<<endl<<"Remaining card: "<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
