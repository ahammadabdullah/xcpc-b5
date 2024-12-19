/**
 *    author:  ahammadabdullah
 *    created: 2024-12-19 22:04:11
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
    ll q;
    cin >> q;
    vector<ll> v(q);
    inp(v);
    string s;
    s.push_back('1');
    ll cur = v[0];
    bool flag = true;
    bool fst = true;
    for (int i = 1; i < q; i++)
    {
        if (cur <= v[i] && flag)
        {
            s.push_back('1');
            cur = v[i];
        }
        else if (v[i] <= v[0] && (cur <= v[i] || fst))
        {
            s.push_back('1');
            cur = v[i];
            fst = false;
            flag = false;
        }
        else
        {
            s.push_back('0');
        }
    }
    cout << s << nl;
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