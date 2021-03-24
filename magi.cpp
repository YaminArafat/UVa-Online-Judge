/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/__gcd(a,b))
#define pi acos(-1)
#define READ freopen("in.txt", "r", stdin)
#define WRITE freopen("out.txt", "w", stdout)
#define hh 18446744073709552000
#define m 1000000

using namespace std;
int ar[m+9];
vector<int>v;

void sieve()
{
    ar[0]=1;
    ar[1]=1;
    for(int i=3; i*i<=m; i+=2)
    {
        if(ar[i]==0)
        {
            for(int j=i*i; j<=m; j+=2*i)
            {
                ar[j] = 1;
            }
        }
    }
    v.push_back(2);
    for(int i=3; i<=m; i+=2)
    {
        if(!ar[i]) v.push_back(i);
    }
}
ll NOD(ll n)
{
    ll c=0,x;
    x = sqrt(n);
    for(ll i=1;i<x;i++)
    {
        if(n%i==0) c+=2;
    }
    if(n%x==0)
    {
        if(x*x==n) c++;
        else c+=2;
    }
    return c;
}

ll SNOD(ll n)
{
    ll c=0,ans=1,tmp=n;
    for(ll i=0;i<v.size()&&(v[i]*v[i])<=tmp;i++)
    {
        if(n%v[i]==0)
        {
            c=0;
            while(n%v[i]==0)
            {
                n/=v[i];
                c++;
            }
            ans*=(c+1);
        }
    }
    if(ans==1)ans*=2;
    return ans;
}

ll SOD (ll n ) {
    ll c=0,x;
    x=sqrt(n);
    for (ll i=1;i<x;i++)
    {
        if( n % i == 0 ) {
            c += i;
            c += n / i;
        }
    }
    if ( n % x == 0 ) {
        if (x*x==n) c+=x;
        else
        c+=(x+n/x);
    }
    return c;
}


int strint(string s) {
	stringstream ss(s);
	int x;
	ss >> x;
	return x;
}

string intstr(int a) {
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}

string charstr(char a) {
	stringstream ss;
	ss << a;
	string str = ss.str();
	return str;
}

ll rev(ll n)
{
    ll rev=0;
    while(n){
    rev = rev*10 + n%10;
    n/=10;}
    return rev;
}


int main(void)
{
    std::ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t,a,b,n,i=0;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<"Case "<<++i<<": "<<0<<endl;
        else
        cout<<"Case "<<++i<<": "<<SNOD(n)-1<<endl;
        //SNOD(n);
    }
    return 0;
}
