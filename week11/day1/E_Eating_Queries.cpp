/**
 *    author:  ahammadabdullah
 *    created: 2025-01-12 22:33:21
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
#define MOD 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pre(n + 1);
    inp(v);
    sort(rall(v));
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int k, ans = -1;
        cin >> k;
        auto it = lower_bound(all(pre), k);
        if (it != pre.end())
            ans = it - pre.begin();
        cout << ans << nl;
    }
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