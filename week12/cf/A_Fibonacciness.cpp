
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
    int a, b, d, e;
    cin >> a >> b >> d >> e;

    vector<int> v = {d - b, e - d, a + b};
    int cnt = 0;

    for (int c : v)
    {
        int seCnt = 0;
        if (d == b + c)
            seCnt++;
        if (e == c + d)
            seCnt++;
        if (c == a + b)
            seCnt++;
        cnt = max(cnt, seCnt);
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