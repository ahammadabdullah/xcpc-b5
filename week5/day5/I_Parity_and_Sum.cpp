/**
 *    author:  ahammadabdullah
 *    created: 2024-11-28 22:24:38
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
    int n;
    cin >> n;
    vector<ll> odd, even;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    if (even.size() == 0 || odd.size() == 0)
    {
        cout << 0 << nl;
        return;
    }
    sort(all(odd));
    sort(all(even));
    int ans = 0;
    ll max = odd.back();
    for (int i = 0; i < even.size(); i++)
    {
        if (even[i] > max)
        {
            ans = (even.size() + 1);
        }
        else
        {
            ans++;
            max += even[i];
        }
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