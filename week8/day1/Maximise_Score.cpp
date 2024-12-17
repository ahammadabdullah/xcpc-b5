
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
    int n;
    cin >> n;
    vector<int> v(n);
    inp(v);
    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++)
    {
        int val = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
        ans = min(ans, val);
    }
    if (n > 1)
    {
        ans = min(ans, abs(v[1] - v[0]));
        ans = min(ans, abs(v[n - 1] - v[n - 2]));
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