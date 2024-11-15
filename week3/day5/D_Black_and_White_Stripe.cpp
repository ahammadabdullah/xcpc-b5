/**
 *    author:  ahammadabdullah
 *    created: 2024-11-15 06:12:23
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0, cnt = 0;
    int ans = n;
    while (r < n)
    {
        if (s[r] == 'B')
            cnt++;
        if (r - l + 1 == k)
        {
            if (cnt >= k)
                ans = min(ans, 0);
            else
                ans = min(ans, k - cnt);
            if (s[l] == 'B')
            {
                cnt--;
            }
            l++;
        }
        r++;
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