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
    int arrA[5], arrB[5];
    while (cin >> arrA[0] >> arrA[1] >> arrA[2] >> arrB[0] >> arrB[1])
    {
        if (!arrA[0] && !arrA[1] && !arrA[2] && !arrB[0] && !arrB[1])
        {
            break;
        }
        sort(arrA, arrA + 3);
        sort(arrB, arrB + 2, greater<int>());
        // if (arrA[0] < arrB[0] || arrA[1] < arrB[1])
        // {
        //     int f = 0;
        //     for (int j = arrA[2] + 1; j <= 52; j++)
        //     {
        //         if (j != arrA[0] && j != arrA[1] && j != arrB[0] && j != arrB[1])
        //         {
        //             f = 1;
        //             cout << j << endl;
        //             break;
        //         }
        //     }
        //     if (!f)
        //         cout << "-1" << endl;
        // }
        int g = 0, b = 0;
        bool baad[55] = {false};
        for0(i, 2, 1)
        {
            bool f = 0;
            for0(j, 3, 1)
            {
                if (baad[arrA[j]])
                    continue;
                if (arrB[i] < arrA[j])
                {
                    f = 1;
                    // arrA[j] = -1;
                    baad[arrA[j]] = true;
                    baad[arrB[i]] = true;
                    g++;
                    break;
                }
            }
            if (!f)
            {
                b++;
                for0(j, 3, 1)
                {
                    if (baad[arrA[j]])
                        continue;
                    // arrA[j] = -1;
                    baad[arrA[j]] = true;
                    baad[arrB[i]] = true;
                    break;
                }
            }
        }
        if (b > g)
        {
            int ans = -1;
            for (int j = 1; j <= 52; j++)
            {
                if (j != arrA[0] && j != arrA[1] && j != arrB[0] && j != arrB[1] && j != arrA[2])
                {
                    b++;
                    ans = j;
                    break;
                }
            }
            cout << ans << endl;
            continue;
        }
        for0(i, 3, 1)
        {
            if (!baad[arrA[i]])
            {
                int ans = -1;
                for (int j = arrA[i] + 1; j <= 52; j++)
                {
                    if (!baad[j])
                    {
                        b++;
                        ans = j;
                        break;
                    }
                }
                if (b > g)
                {
                    cout << ans << endl;
                }
                else
                    cout << "-1" << endl;
            }
        }
    }
    return 0;
}