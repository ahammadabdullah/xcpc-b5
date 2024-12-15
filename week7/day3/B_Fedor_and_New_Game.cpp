

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
int main()
{
    FAST_IO;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    inp(v);

    vector<vector<int>> bits;
    for (int i = 0; i <= m; i++)
    {
        int maxBit = __lg(v[i]);
        int need = n - 1 - maxBit;
        vector<int> temp;
        for (int j = 0; j < need; j++)
        {
            temp.push_back(0);
        }

        for (int j = maxBit; j >= 0; j--)
        {
            temp.push_back(((v[i] >> j) & 1));
        }
        bits.push_back(temp);
    }

    vector<int> f = bits[m];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        vector<int> opt = bits[i];
        for (int j = 0; j < n; j++)
        {
            if (opt[j] != f[j])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << nl;
    return 0;
}