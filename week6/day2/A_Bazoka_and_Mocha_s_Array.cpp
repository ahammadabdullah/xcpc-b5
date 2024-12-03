/**
 *    author:  ahammadabdullah
 *    created: 2024-12-03 22:04:45
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
    vector<int> v(n), V(n);
    inp(v);
    V = v;
    sort(all(V));
    if (v == V)
    {
        yes;
        return;
    }
    if (v[0] < v[n - 1])
    {
        no;
        return;
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
            cnt++;
    }
    if (cnt == 1)
        yes;
    else
        no;
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