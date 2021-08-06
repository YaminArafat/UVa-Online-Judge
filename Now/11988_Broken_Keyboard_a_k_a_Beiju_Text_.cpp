#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i+=incr) 
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i+=incr) 
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i+=incr) 
#define forcr(i, r, l, decr) for (int i = (int)(r); i >= (int)(l); i-=decr)
#define forr0(i, n, decr) for (int i = (int)(n) - 1; i >= 0; i-=decr)
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i-=decr) 
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define see2(x,y) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<'\n'
#define see3(x,y,z) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<" "<<#z<<" = "<<(z)<<'\n'
#define clr(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rw freopen("input.txt","r",stdin);freopen("output.txt","w",stdout); 
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    string s, tmp;
    while (getline(cin, s))
    {
        int j = -1;
        vector<string> v;
        for0(i, s.size(), 1)
        {
            if (s[i] == '[')
            {
                if (j >= 0)
                {
                    v.pb(s.substr(j + 1, i - j - 1));
                    s.erase(j, i - j);
                    i = j - 1;
                    j = -1;
                }
                else
                {
                    j = i;
                }
            }
            else if (s[i] == ']')
            {
                if (j >= 0)
                {
                    v.pb(s.substr(j + 1, i - j - 1));
                    s.erase(j, i - j);
                    i = j - 1;
                    j = -1;
                }
                else
                {
                    s.erase(i, 1);
                    i--;
                }
            }
            // if (s[i] != '[')
            //     continue;
            // j = i + 1;
            // tmp = "";
            // while ((s[j] != ']' && s[j] != '[') && j < s.size())
            // {
            //     tmp += s[j];
            //     j++;
            // }
            // v.pb(tmp);
            // i = j - 1;
        }
        if (j >= 0)
        {
            v.pb(s.substr(j + 1, s.size() - j - 1));
            s.erase(j, s.size() - j);
        }
        reverse(all(v));
        // for0(i, s.size(), 1)
        // {
        //     if (s[i] == ']')
        //     {
        //         s.erase(i, 1);
        //         i--;
        //         continue;
        //     }
        //     if (s[i] != '[')
        //         continue;
        //     j = i + 1;
        //     while ((s[j] != ']' && s[j] != '[') && j < s.size())
        //     {
        //         j++;
        //     }
        //     j--;
        //     s.erase(i, j - i + 1);
        //     i--;
        // }
        for0(i, v.size(), 1)
        {
            cout << v[i];
        }
        cout << s << endl;
    }
    return 0;
}