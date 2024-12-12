/**
 *    author:  ahammadabdullah
 *    created: 2024-12-12 22:08:14
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
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        yes;
        return;
    }

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else
    {
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