#include <bits/stdc++.h>
#include <vector>
#define Check_i(a,pos)(a&(1<<pos))
#define Set_i(a,pos)(a|=(1<<pos))
#define MAX 100
unsigned flag[(MAX/64)+2];
using namespace std;
vector<long long int>prime;
void seive(long long int n)
{
    for(long long int i=3; i*i<=n; i+=2)
    {
        if(Check_i(flag[i>>6],(i/2)%32)==0)
        {
            for(long long int j=i*i; j<=n; j+=2*i)
            {
                flag[j>>6]=Set_i(flag[j>>6],(j/2)%32);
            }
        }
    }
    for(long long int i=3;i<=n;i+=2)
    {
        if(Check_i(flag[i>>6],(i/2)%32)==0)
        {
            prime.push_back(i);
        }
    }
}
void segmented_seive()
{
    long long int maX=floor(sqrt(MAX))+1;
    seive(maX);
    long long int low=maX;
    long long int high=2*maX;
    while (low<MAX)
    {
        if(high>=MAX)
        {
            high=MAX;
        }
        for(long long int i=0;i<prime.size();i++)
        {
            long long int lowlim=floor(low/prime[i])*prime[i];
            if(lowlim<low)
            {
                lowlim+=prime[i];
            }
            for(long long int j=lowlim;j<high;j+=prime[i])
            {
                flag[(j-low)>>6]=Set_i(flag[(j-low)>>6],((j-low)/2)%32);
            }
        }
        for(long long int i=low;i<high;i++)
        {
            if(Check_i(flag[(i - low)>>6],((i - low)/2)%32)==0)
            {
                prime.push_back(i);
            }
        }
        low=low+maX;
        high=high+maX;
    }
}
int main()
{
    long long int l,u,i,j,minn,maxx,temp1,temp2,temp3,temp4;
    segmented_seive();
    for(i=0;i<prime.size();i++)
    {
        cout<<prime[i]<<endl;
    }
    /*while (scanf("%lld %lld",&l,&u)==2 && l!=EOF && u!=EOF)
    {
        minn=10000000;
        maxx=0;
        if(l<=2 && u>=3)
        {
            minn=3-2;
            maxx=3-2;
            temp1=2;
            temp2=3;
            temp3=2;
            temp4=3;
            l=3;
        }
        if(l>2 && l%2==0)
        {
            l++;
        }
        for (i=l; i<=u-2; i+=2)
        {
            if(Check_i(flag[i>>6],(i/2)%32)==0)
            {
                for(j=i+2; j<=u; j+=2)
                {
                    if(Check_i(flag[j>>6],(j/2)%32)==0)
                    {
                        if((j-i)<minn)
                        {
                            minn=j-i;
                            temp1=i;
                            temp2=j;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        for (i=l; i<=u-2; i+=2)
        {
            if(Check_i(flag[i>>6],(i/2)%32)==0)
            {
                for(j=i+2; j<=u; j+=2)
                {
                    if(Check_i(flag[j>>6],(j/2)%32)==0)
                    {
                        if((j-i)>maxx)
                        {
                            maxx=j-i;
                            temp3=i;
                            temp4=j;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        if(!temp1 && !temp2 && !temp3 && !temp4)
        {
            printf("There are no adjacent primes.\n");//<<endl;
        }
        else
        {
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",temp1,temp2,temp3,temp4);//cout<<temp1<<","<<temp2<<" are closest, "<<temp3<<","<<temp4<<" are most distant."<<endl;
            temp1=0;
            temp2=0;
            temp3=0;
            temp4=0;
        }
    }*/
    return 0;
}




























/*#include <bits/stdc++.h>
#define Check_(a,pos)(a&(1<<pos))
#define Set_(a,pos)(a|=(1<<pos))
#define MAX 2147483647
#include <math.h>
#include <algorithm>
unsigned flag[(MAX/64)+2];
//#define maX 200000000
//bool flag[200000000];
using namespace std;
void seive(void)
{
    for (long long i=3; i*i<=MAX; i+=2)
    {
        if(Check_(flag[i>>6],(i/2)%32)==0)
        {
            for(long long j=i*i; j<=MAX; j+=2*i)
            {
                flag[j>>6]=Set_(flag[j>>6],(j/2)%32);
            }
        }
    }
    //flag[1]=1;
}
int main()
{
    long long l,u,i,j,minn,maxx,temp1,temp2,temp3,temp4;
    seive();
    /*while (scanf("%d %d",&l,&u)==2)
    {
        minn=1000000;
        maxx=0;
        if(l<=2)
        {
            minn=3-2;
            maxx=3-2;
            temp1=2;
            temp2=3;
            temp3=2;
            temp4=3;
            l=3;
        }
        if(l>2 && l%2==0)
        {
            l++;
        }
        if(u%2==0)
        {
            u--;
        }
        for (i=l; i<=u-2; i+=2)
        {
            if(Check_(flag[i>>6],(i/2)%32)==0)
            {
                for(j=i+2; j<=u; j+=2)
                {
                    if(Check_(flag[j>>6],(j/2)%32)==0)
                    {
                        if((j-i)<minn)
                        {
                            minn=j-i;
                            temp1=i;
                            temp2=j;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        for (i=l; i<=u-2; i+=2)
        {
            if(Check_(flag[i>>6],(i/2)%32)==0)
            {
                for(j=i+2; j<=u; j+=2)
                {
                    if(Check_(flag[j>>6],(j/2)%32)==0)
                    {
                        if((j-i)>maxx)
                        {
                            maxx=j-i;
                            temp3=i;
                            temp4=j;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        if(!temp1 && !temp2 && !temp3 && !temp4)
        {
            cout<<"There are no adjacent primes."<<endl;
        }
        else
        {
            cout<<temp1<<","<<temp2<<" are closest, "<<temp3<<","<<temp4<<" are most distant."<<endl;
            temp1=0;
            temp2=0;
            temp3=0;
            temp4=0;
        }
    }
return 0;
}*/
