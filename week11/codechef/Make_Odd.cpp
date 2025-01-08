/**
 *    author:  ahammadabdullah
 *    created: 2025-01-08 21:19:41
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
#define MOD 1000000007
void solve()
{
    int n;
    cin >> n;
    string x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '1' && y[i] == '1')
            cnt++;
        else if (x[i] == '1' || y[i] == '1')
        {
            if (cnt % 2 == 0)
                cnt++;
        }
    }
    debug(cnt);
    if (cnt % 2 == 0)
        no;
    else
        yes;
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