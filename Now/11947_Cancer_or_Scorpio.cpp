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
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    cin >> n;
    string s, year, month, day, ans;
    for1(i, n, 1)
    {
        cin >> s;
        year = s.substr(4, 4);
        day = s.substr(2, 2);
        month = s.substr(0, 2);
        int y = 0, m = 0, d = 0, totalD = 281, ansy, ansd, ansm;
        ;
        for0(i, year.size(), 1)
        {
            y = y * 10 + year[i] - '0';
        }
        for0(i, month.size(), 1)
        {
            m = m * 10 + month[i] - '0';
        }
        for0(i, day.size(), 1)
        {
            d = d * 10 + day[i] - '0';
        }
        // see3(d, m, y);
        // see(months[m - 1]);
        totalD -= months[m - 1] - d + 1;
        // see(totalD);
        if (m == 2)
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100))
            {
                totalD--;
            }
        }
        while (totalD > 0)
        {
            if (m == 12)
                y++;
            if (m == 1 || m == 13)
            {
                if (y % 400 == 0 || (y % 4 == 0 && y % 100))
                {
                    // see3(m, y, totalD);
                    totalD--;
                }
            }
            // see(months[m]);
            totalD -= months[m];
            // see2(m, totalD);
            m++;
        }
        // see3(m, totalD, months[m - 1]);
        totalD += months[m - 1];
        if (m == 2 || m == 14)
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100))
            {
                totalD++;
            }
        }
        if (m > 12)
            m %= 12;
        ansd = totalD;
        ansm = m;
        ansy = y;
        if ((ansm == 1 && ansd >= 21) || (ansm == 2 && ansd <= 19))
        {
            ans = "aquarius";
        }
        else if ((ansm == 2 && ansd >= 20) || (ansm == 3 && ansd <= 20))
        {
            ans = "pisces";
        }
        else if ((ansm == 3 && ansd >= 21) || (ansm == 4 && ansd <= 20))
        {
            ans = "aries";
        }
        else if ((ansm == 4 && ansd >= 21) || (ansm == 5 && ansd <= 21))
        {
            ans = "taurus";
        }
        else if ((ansm == 5 && ansd >= 22) || (ansm == 6 && ansd <= 21))
        {
            ans = "gemini";
        }
        else if ((ansm == 6 && ansd >= 22) || (ansm == 7 && ansd <= 22))
        {
            ans = "cancer";
        }
        else if ((ansm == 7 && ansd >= 23) || (ansm == 8 && ansd <= 21))
        {
            ans = "leo";
        }
        else if ((ansm == 8 && ansd >= 22) || (ansm == 9 && ansd <= 23))
        {
            ans = "virgo";
        }
        else if ((ansm == 9 && ansd >= 24) || (ansm == 10 && ansd <= 23))
        {
            ans = "libra";
        }
        else if ((ansm == 10 && ansd >= 24) || (ansm == 11 && ansd <= 22))
        {
            ans = "scorpio";
        }
        else if ((ansm == 11 && ansd >= 23) || (ansm == 12 && ansd <= 22))
        {
            ans = "sagittarius";
        }
        else if ((ansm == 12 && ansd >= 23) || (ansm == 1 && ansd <= 20))
        {
            ans = "capricorn";
        }
        year = "";
        month = "";
        day = "";
        if (ansm < 10)
            month += '0', month += ansm + '0';
        else
            month = to_string(ansm);
        if (ansd < 10)
            day += '0', day += ansd + '0';
        else
            day = to_string(ansd);
        cout << i << " " << month << "/" << day << "/" << ansy << " " << ans << endl;
    }
    return 0;
}