/**
 *    author:  ahammadabdullah
 *    created: 2024-11-26 17:56:00
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
    map<char, int> mp;
    string str = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < str.size(); i++)
        mp[str[i]] = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (auto [key, val] : mp)
        {
            if (val == x)
            {
                cout << key;
                mp[key]++;
                break;
            }
        }
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