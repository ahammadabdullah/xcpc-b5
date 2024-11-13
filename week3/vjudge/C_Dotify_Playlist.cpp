/**
 *    author:  ahammadabdullah
 *    created: 2024-11-11 21:19:47
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
bool cmp(pii a, pii b)
{
    return a.first > b.first;
}
void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(all(v), cmp);
    int result = 0;
    int cnt = 0;
    for (auto [x, y] : v)
    {

        if (y == l)
        {
            result += x;
            cnt++;
            if (cnt == k)
                break;
        }
    }
    if (cnt == k)
        cout << result << nl;
    else
        cout << -1 << nl;
}
int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}