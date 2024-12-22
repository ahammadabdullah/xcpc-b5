/**
 *    author:  ahammadabdullah
 *    created: 2024-12-22 20:36:24
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
    vector<int> a(n), b(n);
    inp(a);
    inp(b);
    int m = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && a[i] > b[i + 1])
        {
            m += a[i];
            s += b[i + 1];
        }
        else if (i == n - 1)
        {
            m += a[i];
        }
    }
    cout << m - s << nl;
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