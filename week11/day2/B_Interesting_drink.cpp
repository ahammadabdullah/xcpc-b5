/**
 *    author:  ahammadabdullah
 *    created: 2025-01-14 21:14:51
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
#define MOD 1000000007
int main()
{
    FAST_IO;
    int n;
    cin >> n;
    vector<int> v(n);
    inp(v);
    sort(all(v));
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m, l = 0, r = n - 1, mid;
        cin >> m;
        int ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= m)
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << nl;
    }
    return 0;
}