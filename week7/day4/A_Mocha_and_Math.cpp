
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
    vector<int> v;
    int maX = 0;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int maxBit = __lg(x);
        maX = max(maX, maxBit);
    }

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int maxBit = __lg(x);
        string s;

        for (int j = 0; j <= maxBit; j++)
        {
            if ((x >> j) & 1 == 1)
            {
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
        }
        for (int j = 0; j < maX - maxBit; j++)
        {
            s.push_back('0');
        }
        st.push_back(s);
    }

    int ans = 0;
    for (int i = 0; i < st[0].size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (st[j][i] == '0')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans += (1 << i);
        }
    }
    cout << ans << nl;
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