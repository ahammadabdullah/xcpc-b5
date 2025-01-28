
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
#define MOD 1000000007
int main()
{
    FAST_IO;
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (v[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                v[j]++;
            }
        }
    }
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] == 2)
        {
            ans++;
        }
    }
    cout << ans << nl;
    return 0;
}