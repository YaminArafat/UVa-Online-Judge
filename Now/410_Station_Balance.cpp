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
    int c, n, t = 1;
    while (cin >> c >> n)
    {
        int arr[20], cpyArr[20], sss = 0, tmp2 = n, tmp3 = c;
        double am = 0, tmp = 0, imb = 0;
        for0(i, n, 1)
        {
            cin >> arr[i];
            // cpyArr[i] = arr[i];
            am += arr[i];
        }
        forc(i, n, 2 * c - 1, 1)
        {
            arr[i] = 0;
        }
        // tmp = n;
        am /= (double)c;
        sort(arr, arr + 2 * c);
        cout << "Set #" << t++ << endl;
        for0(i, c, 1)
        {
            cout << " " << i << ":";
            if (arr[i])
            {
                cout << " " << arr[i];
            }
            if (arr[2 * c - i - 1])
            {
                cout << " " << arr[2 * c - i - 1];
            }
            cout << endl;
            imb += fabs((arr[i] + arr[2 * c - i - 1]) - am);
        }
        // if (c >= n)
        // {
        //     for0(i, c, 1)
        //     {
        //         if (i + 1 <= n)
        //             cout << " " << i << ": " << cpyArr[i + 1] << endl, imb += fabs(cpyArr[i + 1] - am);
        //         else
        //             cout << " " << i << ":" << endl, imb += am;
        //     }
        // }
        // else
        // {
        //     sort(arr + 1, arr + n + 1);
        //     // for1(i, n, 1)
        //     // {
        //     //     cout << arr[i] << " ";
        //     // }
        //     map<int, int> mp, pair;
        //     bool mark[n + 5];
        //     clr(mark, false);
        //     for1(i, n, 1)
        //     {
        //         mp[arr[i]] = i;
        //     }
        //     // vpii v;
        //     if (n % 2 == 0)
        //         tmp++;
        //     for1(i, n / 2, 1)
        //     {
        //         pair[i] = tmp - i;
        //         pair[tmp - i] = i;
        //         // v.pb(mk(arr[i], arr[n - i - 1]));
        //         // imb += fabs(double(arr[i] + arr[n - i - 1]) - am);
        //     }
        //     for1(i, n, 1)
        //     {
        //         if (mark[mp[cpyArr[i]]])
        //             continue;
        //         if (!pair[mp[cpyArr[i]]])
        //         {
        //             cout << " " << sss++ << ": " << cpyArr[i] << endl;
        //             imb += fabs(cpyArr[i] - am);
        //             mark[mp[cpyArr[i]]] = true;
        //             // tmp2--;
        //             // if (tmp2 <= c)
        //             //     break;
        //         }
        //         else
        //         {
        //             cout << " " << sss++ << ": " << cpyArr[i] << " " << arr[pair[mp[cpyArr[i]]]] << endl;
        //             imb += fabs((cpyArr[i] + arr[pair[mp[cpyArr[i]]]]) - am);
        //             mark[mp[cpyArr[i]]] = true;
        //             mark[pair[mp[cpyArr[i]]]] = true;
        //             tmp2 -= 2;
        //             tmp3--;
        //             if (tmp2 <= tmp3)
        //                 break;
        //         }
        //     }
        //     forc(i, sss, c - 1, 1)
        //     {
        //         if (tmp2 > 0)
        //         {
        //             for1(j, n, 1)
        //             {
        //                 if (mark[mp[cpyArr[j]]])
        //                     continue;
        //                 cout << " " << i << ": " << cpyArr[j] << endl;
        //                 mark[mp[cpyArr[j]]] = true;
        //                 imb += fabs(cpyArr[j] - am);
        //                 tmp2--;
        //                 break;
        //             }
        //         }
        //         else
        //             cout << " " << i << ":" << endl, imb += am;
        //     }
        // }
        // // for0(i, v.size(), 1)
        // // {
        // //     cout << i << ": " << v[i].ff << " " << v[i].ss << endl;
        // // }
        // // if ((int)tmp % 2)
        // // {
        // //     cout << n / 2 << ": " << arr[n] << endl;
        // //     imb += fabs(arr[n] - am);
        // // }
        cout << "IMBALANCE = " << fixed << setprecision(5) << imb << endl
             << endl;
    }
    return 0;
}