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
        int t;
        cin >> t;
        string s, hh, mm, HH, MM;
        while (t--)
        {
            cin >> s;
            hh = s.substr(0, 2);
            mm = s.substr(3, 2);
            int h = (hh[0] - '0') * 10 + (hh[1] - '0');
            int m = (mm[0] - '0') * 10 + (mm[1] - '0');
            HH = "", MM = "";
            while (1)
            {
                m++;
                if (m == 60)
                    m = 0, h++;
                if (h == 24)
                    h = 0;
                if (!h)
                {
                    // if (!m)
                    //     continue;
                    if (m < 10)
                    {
                        HH += "00";
                        MM += "0";
                        MM += to_string(m);
                        break;
                    }
                    else
                    {
                        string tmp = to_string(m);
                        MM = tmp;
                        reverse(all(tmp));
                        if (MM == tmp)
                        {
                            HH += "00";
                            break;
                        }
                        MM = "";
                    }
                }
                else
                {
                    string tmp = to_string(h), tmp2;
                    if (m < 10)
                        tmp += "0";
                    tmp += to_string(m);
                    tmp2 = tmp;
                    reverse(all(tmp2));
                    if (tmp == tmp2)
                    {
                        if (h < 10)
                        {
                            HH += "0";
                            HH += to_string(h);
                        }
                        else
                            HH = to_string(h);
                        if (m < 10)
                            MM += "0";
                        MM += to_string(m);
                        break;
                    }
                }
            }
            cout << HH << ":" << MM << endl;
        }
        return 0;
}