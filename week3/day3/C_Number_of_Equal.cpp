/**
 *    author:  ahammadabdullah
 *    created: 2024-11-13 22:57:37
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
int main()
{
    FAST_IO;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    inp(a);
    inp(b);
    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == curr)
        {
            cnt1++, l++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }
        while (r < m && b[r] == curr)
        {
            cnt2++, r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }

    cout << ans << '\n';

    return 0;
}