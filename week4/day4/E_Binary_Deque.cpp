/**
 *    author:  ahammadabdullah
 *    created: 2024-11-22 06:41:35
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
    int n, s, sum = 0, cnt = INT_MAX;
    cin >> n >> s;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int l = 0, r = 0;
    while (r < n)
    {
        sum += dq[r];
        while (sum > s && l <= r)
        {
            sum -= dq[l];
            l++;
        }
        if (sum == s)
        {
            cnt = min(cnt, l + (n - r - 1));
        }
        r++;
    }
    if (cnt == INT_MAX)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << cnt << nl;
    }
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