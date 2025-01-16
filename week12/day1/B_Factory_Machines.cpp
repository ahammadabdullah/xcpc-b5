
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
const ll N = 1e18;
int main()
{
    FAST_IO;
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    inp(v);
    sort(all(v));
    auto flag = [&](ll sec)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += sec / v[i];
            if (cnt >= t)
            {
                return true;
            }
        }
        return cnt >= t;
    };

    ll l = 1, r = N, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (flag(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << nl;
    return 0;
}