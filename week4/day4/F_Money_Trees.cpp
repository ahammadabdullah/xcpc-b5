/**
 *    author:  ahammadabdullah
 *    created: 2024-11-22 07:18:42
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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n), V(n);
    inp(v);
    inp(V);
    ll l = 0, r = 0, sum = 0, cnt = 0;
    while (r < n)
    {
        sum += v[r];
        while (l < r && (sum > k || r > 0 && V[r - 1] % V[r] != 0))
        {
            sum -= v[l];
            l++;
        }
        if (sum <= k)
        {
            cnt = max(cnt, r - l + 1);
        }
        r++;
    }
    cout << cnt << nl;
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