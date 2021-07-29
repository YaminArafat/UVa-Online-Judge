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
int go[105];
int findDes(int from)
{
    if (go[from] == from)
        return from;
    return go[from] = findDes(go[from]);
}
int playerPosition[1000005];
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    for0(i, 1000005, 1)
    {
        playerPosition[i] = 1;
    }
    int t, p, b, d;
    cin >> t;
    while (t--)
    {
        cin >> p >> b >> d;
        int from, to, roll, playerNum;
        for0(i, 101, 1)
        {
            go[i] = i;
        }
        for0(i, b, 1)
        {
            cin >> from >> to;
            go[from] = to;
        }
        bool gameOver = false;
        for0(i, d, 1)
        {
            cin >> roll;
            if (!gameOver)
            {
                playerNum = (i % p) + 1;
                playerPosition[playerNum] += roll;
                if (playerPosition[playerNum] >= 100)
                {
                    playerPosition[playerNum] = 100;
                    gameOver = true;
                }
                playerPosition[playerNum] = go[playerPosition[playerNum]];
                if (playerPosition[playerNum] >= 100)
                {
                    playerPosition[playerNum] = 100;
                    gameOver = true;
                }
            }
        }
        for1(i, p, 1)
        {
            cout << "Position of player " << i << " is " << playerPosition[i] << "." << endl;
            playerPosition[i] = 1;
        }
        // for1(i, 100, 1)
        // {
        //     go[i] = findDes(i);
        // }
        // if (p == d)
        // {
        //     for0(i, d, 1)
        //     {
        //         cin >> roll;
        //         cout << "Position of player " << i + 1 << " is " << go[1 + roll] << "." << endl;
        //     }
        // }
        // else if (p > d)
        // {
        //     for0(i, d, 1)
        //     {
        //         cin >> roll;
        //         cout << "Position of player " << i + 1 << " is " << go[1 + roll] << "." << endl;
        //     }
        //     forc(i, d + 1, p, 1)
        //     {
        //         cout << "Position of player " << i << " is "
        //              << "1"
        //              << "." << endl;
        //     }
        // }
        // else
        // {
        //     int xx, prev = 1, j = 1;
        //     for0(i, d, 1)
        //     {
        //         cin >> roll;
        //         if (prev + roll <= 100)
        //         {
        //             xx = go[prev + roll];
        //             prev = xx;
        //         }
        //         else if (j <= p)
        //         {
        //             cout << "Position of player "
        //                  << j
        //                  << " is " << xx << "." << endl;
        //             prev = 1;
        //             xx = go[prev + roll];
        //             prev = xx;
        //             j++;
        //         }
        //     }
        //     if (j <= p)
        //         cout << "Position of player "
        //              << j
        //              << " is " << xx << "." << endl;
        //     forc(i, j + 1, p, 1)
        //     {
        //         cout << "Position of player " << i << " is "
        //              << "1"
        //              << "." << endl;
        //     }
        // }
        clr(go, 0);
    }
    return 0;
}