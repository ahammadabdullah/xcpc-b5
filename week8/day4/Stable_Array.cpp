/**
 *    author:  ahammadabdullah
 *    created: 2024-12-18 21:02:17
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
    vector<int> v(n);
    inp(v);
    ll cnt = 0;
    ll mx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > v[i - 1])
        {
            int j = i - 1;

            while (j >= 0 && v[i] > v[j])
            {
                cnt++;
                j--;
            }
            mx = max(mx, cnt);
            cnt = 0;
            i = j + 1;
        }
    }
    cout << max(0LL, mx) << nl;
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