/**
 *    author:  ahammadabdullah
 *    created: 2024-12-21 22:18:26
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
    string s, t;
    cin >> s;
    t = s;
    int n = s.size();
    queue<int> zero, one;
    for (int i = 0; i < n; i++)
    {
        (s[i] == '0' ? zero : one).push(i);
    }
    while (!one.empty() && !zero.empty())
    {
        int z = zero.front();
        int o = one.front();
        zero.pop();
        one.pop();
        swap(t[z], t[o]);
    }
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            idx = i;
            break;
        }
    }
    int ans = (idx == -1) ? 0 : n - idx;
    cout << ans << nl;
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