/**
 *    author:  ahammadabdullah
 *    created: 2024-11-24 15:03:15
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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] += i + 1;
    }
    sort(all(v));
    ll cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] + sum > m)
            break;
        cnt++;
        sum += v[i];
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