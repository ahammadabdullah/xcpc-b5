/**
 *    author:  ahammadabdullah
 *    created: 2024-11-17 04:30:07
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
    int a, b, c;
    cin >> a >> b >> c;
    int cnt1 = abs(a - 1), cnt2 = abs(b - c) + abs(c - 1);
    if (cnt1 < cnt2)
        cout << 1 << nl;
    else if (cnt1 > cnt2)
        cout << 2 << nl;
    else
        cout << 3 << nl;
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