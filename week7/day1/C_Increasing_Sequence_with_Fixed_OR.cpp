/**
 *    author:  ahammadabdullah
 *    created: 2024-12-10 09:28:46
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
    ll n;
    cin >> n;
    deque<ll> dq;
    for (int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            ll val = n - (1LL << k);
            if (val > 0)
                dq.push_front(val);
        }
    }
    dq.push_back(n);
    cout << dq.size() << nl;
    for (auto v : dq)
    {
        cout << v << " ";
    }
    cout << nl;
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