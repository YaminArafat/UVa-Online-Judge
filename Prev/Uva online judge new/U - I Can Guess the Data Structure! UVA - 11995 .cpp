#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,q=0,s=0,pq=0;
    scanf("%d",&n);
    //pair<int,int>p[n];
    //int arr[2][n];
    vector<vector<int>>vec;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        vec[x][y]=y;
    }
    for(int i=0;i<vec[2].size();i++)
    {
        if(vec[1][i]==vec[2][i])
        {
            q++;
        }
    }
}
