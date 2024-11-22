/**
 *    author:  ahammadabdullah
 *    created: 2024-11-22 08:13:16
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
#define PREFIX_SUM(vec, prefix)             \
    prefix.resize(vec.size());              \
    prefix[0] = vec[0];                     \
    for (size_t i = 1; i < vec.size(); ++i) \
        prefix[i] = prefix[i - 1] + vec[i];

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n), pre(n);
    string s;
    inp(v);
    cin >> s;
    PREFIX_SUM(v, pre);
    ll l = 0, r = n - 1, ans = 0;

    while (l < n)
    {
        if (s[l] == 'L')
        {
            while (r > l && s[r] != 'R')
                r--;
            if (r > l)
            {
                ans += pre[r] - (l > 0 ? pre[l - 1] : 0);
                r--;
            }
        }
        l++;
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
