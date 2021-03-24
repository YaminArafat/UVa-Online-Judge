#include<iostream>
#include<vector>
#include<utility>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    while(1==scanf("%d",&t))
    {
        while(t--)
        {
            int n,m;
            scanf("%d %d",&n,&m);
            vector <pair<int , int> >vc;
            int i =0;
            int mm = m;
            while(m--)
            {
                int a , b;
                pair <int , int> p;
                scanf("%d %d" ,&a,&b);
                //arr[a]=1;
                //arr[b]=1;
                p.first = a;
                p.second=b;
                vc.push_back(p);
                i++;



            }
            sort(vc.begin(),vc.end());
            int count=0;
            for(int j=1;j<i;j++)
            {

                if(vc[j-1].second!=vc[j].first){
                        count++;
                        arr[vc[j-1].second ]= 1;
                        arr[ vc[j].first] = 1;
                }

            }

            printf("%d\n",count+n-mm);
            vc.clear();


        }
    }
    return 0;
}
