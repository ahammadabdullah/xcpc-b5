/**
 *    author:  ahammadabdullah
 *    created: 2024-11-17 04:43:21
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
    string s, ans;
    cin >> s;
    int r = n - 1;
    while (r >= 0)
    {
        if (s[r] == '0')
        {
            int num = (s[r - 2] - '0') * 10 + (s[r - 1] - '0');
            char c = 'a' + (num - 1);
            ans.push_back(c);
            r -= 3;
        }
        else
        {
            int num = s[r] - '0';
            char c = 'a' + (num - 1);
            ans.push_back(c);
            r--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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