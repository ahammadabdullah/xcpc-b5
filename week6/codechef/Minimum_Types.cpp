/**
 *    author:  ahammadabdullah
 *    created: 2024-12-04 21:24:18
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
#define pll pair<ll, ll>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define debug(x) cerr << #x << " = " << (x) << endl;
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pll> v(n);
    for (int i = 0; i < n; i++)
    {
        ll X;
        cin >> X;
        v[i].first = X;
    }
    for (int i = 0; i < n; i++)
    {
        ll X;
        cin >> X;
        v[i].second = X;
    }
    sort(rall(v));
    ll count = 0, sum = 0;
    for (auto [itm, cnt] : v)
    {
        ll coin = (x - sum + itm - 1) / itm;
        ll used = min(coin, cnt);
        sum += used * itm;
        if (used > 0)
            count++;
    }
    if (sum >= x)
        cout << count << nl;
    else
        cout << -1 << nl;
}
int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}