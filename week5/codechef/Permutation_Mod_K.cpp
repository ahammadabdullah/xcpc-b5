/**
 *    author:  ahammadabdullah
 *    created: 2024-11-27 20:48:04
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
    if (k > n || k == 1)
    {
        cout << -1 << nl;
        return;
    }
    vector<int> v(n), V(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        int pos = (i + k - 1) % n;
        V[pos] = v[i];
    }
    out(V);
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