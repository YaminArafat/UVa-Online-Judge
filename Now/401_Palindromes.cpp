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
map<char, char> mp;
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    string s;
    mp['A'] = 'A';
    mp['3'] = 'E';
    mp['E'] = '3';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['L'] = 'J';
    mp['J'] = 'L';
    mp['M'] = 'M';
    mp['O'] = 'O';
    mp['2'] = 'S';
    mp['S'] = '2';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
    mp['5'] = 'Z';
    mp['Z'] = '5';
    mp['1'] = '1';
    mp['8'] = '8';
    while (cin >> s)
    {
        bool regP = true, mirrosS = true, mirrorP = true;
        string rev = s;
        reverse(all(rev));
        if (s != rev)
        {
            regP = false;
            mirrorP = false;
            int cnt = 0;
            for0(i, s.size(), 1)
            {
                if (rev[i] == 'A' || rev[i] == 'E' || rev[i] == '3' || rev[i] == 'H' || rev[i] == 'I' || rev[i] == 'J' || rev[i] == 'L' || rev[i] == 'M' || rev[i] == 'O' || rev[i] == 'S' || rev[i] == '2' || rev[i] == 'T' || rev[i] == 'U' || rev[i] == 'V' || rev[i] == 'W' || rev[i] == 'X' || rev[i] == 'Y' || rev[i] == 'Z' || rev[i] == '5' || rev[i] == '1' || rev[i] == '8')
                {
                    cnt++;
                }
            }
            if (cnt != s.size())
                mirrosS = false;
            else
            {
                rev = "";
                for0(i, s.size(), 1)
                {
                    rev += mp[s[i]];
                }
                reverse(all(rev));
                if (s != rev)
                    mirrosS = false;
            }
        }
        else
        {
            mirrosS = false;
            int cnt = 0;
            for0(i, rev.size(), 1)
            {
                if (rev[i] == 'A' || rev[i] == 'E' || rev[i] == '3' || rev[i] == 'H' || rev[i] == 'I' || rev[i] == 'J' || rev[i] == 'L' || rev[i] == 'M' || rev[i] == 'O' || rev[i] == 'S' || rev[i] == '2' || rev[i] == 'T' || rev[i] == 'U' || rev[i] == 'V' || rev[i] == 'W' || rev[i] == 'X' || rev[i] == 'Y' || rev[i] == 'Z' || rev[i] == '5' || rev[i] == '1' || rev[i] == '8')
                {
                    cnt++;
                }
            }
            if (cnt == s.size())
            {
                rev = "";
                for0(i, s.size(), 1)
                {
                    rev += mp[s[i]];
                }
                reverse(all(rev));
                if (s != rev)
                    mirrorP = false;
                else
                    regP = false;
            }
            else
                mirrorP = false;
        }
        if (regP)
        {
            cout << s << " -- is a regular palindrome." << endl;
        }
        else if (mirrorP)
        {
            cout << s << " -- is a mirrored palindrome." << endl;
        }
        else if (mirrosS)
        {
            cout << s << " -- is a mirrored string." << endl;
        }
        else
        {
            cout << s << " -- is not a palindrome." << endl;
        }
        cout << endl;
    }
    return 0;
}