/**
 *    author:  ahammadabdullah
 *    created: 2024-11-30 16:20:13
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
    ll n, k, diff = LLONG_MAX;
    cin >> n >> k;
    vector<ll> v(k), ans(n);
    inp(v);
    for (ll i = k - 1; i > 0; i--)
    {
        if (v[i] - v[i - 1] > diff)
        {
            no;
            return;
        }
        else
            diff = v[i] - v[i - 1];
    }
    ll end = v[0];
    for (ll i = n - k - 1; i >= 0; i--)
    {
        end = end - diff;
    }
    if (end > diff)
    {
        no;
    }
    else
    {

        yes;
    }
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