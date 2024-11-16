/**
 *    author:  ahammadabdullah
 *    created: 2024-11-17 04:19:56
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
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    inp(v);
    ll val = a - 1;
    ll sum = b;
    for (auto va : v)
    {
        sum += min(val, va);
    }
    cout << sum << nl;
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