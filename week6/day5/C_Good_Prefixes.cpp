/**
 *    author:  ahammadabdullah
 *    created: 2024-12-06 21:21:40
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
    vector<ll> v(n);
    inp(v);
    ll sum = 0, cnt = 0;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        st.insert(v[i]);
        if (sum % 2 == 0 && st.find(sum / 2) != st.end())
        {
            cnt++;
        }
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