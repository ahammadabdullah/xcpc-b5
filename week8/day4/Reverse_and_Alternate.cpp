/**
 *    author:  ahammadabdullah
 *    created: 2024-12-21 23:08:25
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
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
            one++;
        else if (s[i] == '0' && s[i + 1] == '0')
            zero++;
    }
    if (zero == 0 && one == 0)
    {
        yes;
        return;
    }
    if (zero >= 2 || one >= 2)
    {
        no;
        return;
    }
    if (zero == 1 && one == 1)
    {
        yes;
        return;
    }
    if (zero == 1)
    {
        if (s[0] == '1' || s[n - 1] == '1')
            yes;
        else
            no;
    }
    else
    {
        if (s[0] == '0' || s[n - 1] == '0')
            yes;
        else
            no;
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