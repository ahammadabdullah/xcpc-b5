
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
    int x;
    cin >> x;
    int maxBit = __lg(x);

    int ans = 1, zero = 0, one = 0, y = pow(2, maxBit);

    for (int i = maxBit; i >= 0; i--)
    {
        if (((x >> i) & 1) == 0)
        {
            if (one > 1)
                zero++;
        }
        else
            one++;
    }

    if (x - y > 1)
    {
        ans = pow(2, zero);
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