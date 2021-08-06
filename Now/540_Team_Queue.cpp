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
    int n, t, c = 1, x;
    string s;
    while (cin >> n && n)
    {
        // vi member[n + 2];
        map<int, int> mp;
        for1(i, n, 1)
        {
            cin >> t;
            for0(j, t, 1)
            {
                cin >> x;
                // member[i].pb(x);
                mp[x] = i;
            }
        }
        queue<int> q[n + 2];
        // priority_queue<pii> pq;
        queue<int> qMain;
        set<int>setQ;
        // queue< <queue<int> > q2d;
        int d = 1;
        cout << "Scenario #" << c++ << endl;
        while (cin >> s && s != "STOP")
        {
            if (s == "ENQUEUE")
            {
                cin >> x;
                // cout << "enqueue " << x << " " << mp[x] << endl;
                q[mp[x]].push(x);
                if (!setQ.count(mp[x]))
                    qMain.push(mp[x]);
                setQ.insert(mp[x]);
                // if (q[mp[x]].empty())
                // {
                //     // cout << "empty " << x << " " << mp[x] << endl;
                //     q[mp[x]].push(mk(-d, x)), pq.push(mk(-d, x)), d++;
                //     // see2(q[mp[x]].front().ff, d);
                // }
                // else
                // {
                //     // cout << " not empty " << x << " " << mp[x] << endl;
                //     q[mp[x]].push(mk(q[mp[x]].front().ff, x)), pq.push(mk(q[mp[x]].front().ff, x));
                //     // see2(q[mp[x]].front().ff, pq.top().ff);
                // }
                // qMain.push(x);
            }
            else
            {
                //  cout << "dequeue " << qMain.front() << " " << qMain.size() << " " << q[qMain.front()].size() << endl;
                // while (!qMain.empty() && q[qMain.front()].empty())
                // {
                //      cout << "LOop " << qMain.front() << endl;
                //     qMain.pop();
                // }
                //  cout << "Breaked " << qMain.front() << endl;
                cout << q[qMain.front()].front() << endl;
                q[qMain.front()].pop();
                if (q[qMain.front()].empty())
                    setQ.erase(qMain.front()), qMain.pop();
                // qMain.pop();
                //  cout << "cutting " << qMain.front() << " " << qMain.size() << " " << q[qMain.front()].size() << endl;
                // while (!qMain.empty() && q[qMain.front()].empty())
                // {
                //      cout << "CLOop " << qMain.front() << endl;
                //     qMain.pop();
                // }
                //  cout << "Breaked " << qMain.front() << endl;
                // if (!pq.empty())
                // {
                //     cout << pq.top().ss << endl;
                //     q[mp[pq.top().ss]].pop();
                //     pq.pop();
                // }
                // chk:
                //     if (d <= n && !q[d].empty())
                //     {
                //         cout << q[d].front() << endl;
                //         q[d].pop();
                //         d = 1;
                //     }
                //     else
                //     {
                //         d++;
                //         if(d > n)
                //             continue;
                //         goto chk;
                //     }
                // cout << qMain.front() << endl;
                // qMain.pop();
            }
        }
        cout << endl;
    }
    return 0;
}