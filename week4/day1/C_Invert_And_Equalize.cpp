/**
 *    author:  ahammadabdullah
 *    created: 2024-11-17 03:49:27
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
    int r = 0, cnt1 = 0, cnt2 = 0;
    bool flag = false;
    while (r < n)
    {

        if (s[r] == '0')
        {
            if (!flag)
            {
                cnt1++;
                flag = true;
            }
        }
        else if (s[r] == '1')
        {
            flag = false;
        }
        r++;
    }

    flag = false;
    r = 0;
    while (r < n)
    {

        if (s[r] == '1')
        {
            if (!flag)
            {
                cnt2++;
                flag = true;
            }
        }
        else if (s[r] == '0')
        {
            flag = false;
        }
        r++;
    }
    cout << min(cnt1, cnt2) << nl;
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