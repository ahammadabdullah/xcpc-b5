/**
 *    author:  ahammadabdullah
 *    created: 2024-12-22 20:46:01
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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll sum = a + b + c;
    ll round = n / sum;
    ll traveled = round * sum;
    ll cnt = 3 * round;
    ll remaining = n - traveled;
    if (remaining > 0)
    {
        remaining -= a;
        cnt++;
    }
    if (remaining > 0)
    {
        remaining -= b;
        cnt++;
    }
    if (remaining > 0)
    {
        remaining -= c;
        cnt++;
    }
    cout << cnt << nl;
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