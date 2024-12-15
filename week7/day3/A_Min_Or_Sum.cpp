
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int maxBit = __lg(x);
        for (int j = 0; j <= maxBit; j++)
        {
            if ((x >> j) & 1 == 1)
            {
                mp[j]++;
            }
        }
    }

    int ans = 0;
    for (auto [key, value] : mp)
    {
        ans += pow(2, key);
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