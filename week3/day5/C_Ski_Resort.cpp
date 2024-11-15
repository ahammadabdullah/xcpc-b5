/**
 *    author:  ahammadabdullah
 *    created: 2024-11-15 08:02:13
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

ll countSubArr(ll n, ll k)
{
    ll cnt = 0;
    for (ll i = k; i <= n; i++)
    {
        cnt += (n - i + 1);
    }
    return cnt;
}

void solve()
{
    ll n, q, k;
    cin >> n >> q >> k;
    vector<ll> v(n);
    inp(v);
    vector<ll> days;
    bool flag = false;
    ll r = 0, cnt = 0;
    while (r < n)
    {
        if (v[r] <= k)
        {
            cnt++;
            flag = true;
        }
        else
        {
            flag = false;
            if (cnt)
                days.push_back(cnt);
            cnt = 0;
        }
        r++;
    }
    if (cnt)
        days.push_back(cnt);
    ll ans = 0;
    for (auto day : days)
    {
        ans += countSubArr(day, q);
    }
    cout << ans << endl;
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