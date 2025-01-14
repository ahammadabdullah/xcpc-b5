/**
 *    author:  ahammadabdullah
 *    created: 2025-01-14 21:26:07
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
    vector<ll> v(n), pre(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pre[i] = v[i] + (i > 0 ? pre[i - 1] : 0);
    }

    for (int i = 0; i < q; i++)
    {
        int m, l = 0, r = n - 1, mid, idx = -1;
        cin >> m;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= m)
            {
                l = mid + 1;
                idx = mid;
            }
            else
                r = mid - 1;
        }
        if (idx == -1)
            cout << 0 << " ";
        else
            cout << pre[idx] << " ";
    }
    cout << nl;
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