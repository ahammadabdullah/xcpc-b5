/**
 *    author:  ahammadabdullah
 *    created: 2024-11-28 21:55:17
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
    string s;
    cin >> s;
    string S = s;
    reverse(all(S));
    if (s <= S)
    {
        if (n % 2 == 0)
            cout << s << nl;
        else
            cout << s + S << nl;
    }
    else
    {
        if (n % 2 == 1)
            cout << S << nl;
        else
            cout << S + s << nl;
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