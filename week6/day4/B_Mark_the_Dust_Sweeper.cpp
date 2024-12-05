/**
 *    author:  ahammadabdullah
 *    created: 2024-12-05 23:03:03
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
    deque<int> dq(n);
    inp(dq);
    for (int i = 0; i < n; i++)
    {
        if (dq.front() == 0)
        {
            dq.pop_front();
        }
    }
    int cnt = 0;
    if (dq.empty())
    {
        cout << cnt << nl;
        return;
    }
    for (int i = 0; i < dq.size() - 1; i++)
    {
        if (dq[i] == 0)
            cnt++;
        else
            cnt += dq[i];
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