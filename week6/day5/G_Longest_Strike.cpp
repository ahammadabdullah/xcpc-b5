/**
 *    author:  ahammadabdullah
 *    created: 2024-12-06 21:32:06
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
    vector<int> v(n);
    map<int, int> occ;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        occ[v[i]]++;
    }
    sort(all(v));

    int L = -1, R = -1;
    int l = -1, r;
    for (int i = 0; i < n; i++)
    {

        if (occ[v[i]] < k)
            continue;
        if (l == -1)
            l = v[i];

        if (i == n - 1 or v[i + 1] - v[i] > 1 or occ[v[i + 1]] < k)
        {
            r = v[i];
            if (r - l >= R - L)
            {
                R = r;
                L = l;
            }
            l = -1, r = -1;
        }
    }
    if (L == -1)
        cout << -1 << nl;
    else
        cout << L << " " << R << nl;
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