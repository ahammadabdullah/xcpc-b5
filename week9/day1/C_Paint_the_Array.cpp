/**
 *    author:  ahammadabdullah
 *    created: 2024-12-26 22:55:28
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
    ll n;
    cin >> n;
    vector<ll> v(n);
    inp(v);
    ll g1 = 0, g2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, v[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, v[i]);
    }
    ll ans = 0;
    bool flag = true;
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % g1 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        ans = g1;
    else
    {
        flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans = g2;
    }
    cout << ans << nl;
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