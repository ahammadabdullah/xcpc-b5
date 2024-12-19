
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
    int ans = INT_MAX;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                if (s[r] == i)
                {
                    r--;
                    ++cnt;
                }
                else if (s[l] == i)
                {
                    l++;
                    cnt++;
                }
                else
                {
                    cnt = INT_MAX;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        ans = min(ans, cnt);
    }

    cout << (ans == INT_MAX ? -1 : ans) << nl;
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