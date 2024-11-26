/**
 *    author:  ahammadabdullah
 *    created: 2024-11-26 18:53:30
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
    vector<int> v(n);
    inp(v);
    int z = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
            p++;
        else
            z++;
    }
    int ans;
    if (z == 0 || p >= z - 1)
        ans = 0;
    else
    {
        int max = *max_element(all(v));
        if (max == 1)
            ans = 2;
        else
            ans = 1;
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