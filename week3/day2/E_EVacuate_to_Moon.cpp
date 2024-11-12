/**
 *    author:  ahammadabdullah
 *    created: 2024-11-12 21:02:03
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define inp(a)        \
    for (auto &x : a) \
    cin >> x
#define out(a)              \
    for (const auto &x : a) \
        cout << x << ' ';   \
    cout << '\n'
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define debug(x) cerr << #x << " = " << (x) << endl;
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    priority_queue<ll> p;
    priority_queue<ll> q;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        p.push(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        q.push(x);
    }
    ll res = 0;
    while (!p.empty() && !q.empty())
    {
        ll x = q.top() * h;
        if (x > p.top())
        {
            res += p.top();
        }
        else
        {
            res += x;
        }
        p.pop();
        q.pop();
    }
    cout << res << nl;
}
int main()
{
    FAST_IO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}