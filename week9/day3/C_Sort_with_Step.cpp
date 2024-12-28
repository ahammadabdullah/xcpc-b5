/**
 *    author:  ahammadabdullah
 *    created: 2024-12-28 21:50:43
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    inp(v);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(v[i] - (i + 1)) % k != 0)
            cnt++;
    }
    if (cnt == 0)
        cout << 0 << nl;
    else if (cnt == 2)
        cout << 1 << nl;
    else
        cout << -1 << nl;
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