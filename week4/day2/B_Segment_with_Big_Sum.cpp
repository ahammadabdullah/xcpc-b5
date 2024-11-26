/**
 *    author:  ahammadabdullah
 *    created: 2024-11-18 21:27:27
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

    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    inp(v);
    ll l = 0, r = 0, sum = 0, cnt = INT_MAX;

    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {

            cnt = min(cnt, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (cnt == INT_MAX)
        cout << -1 << nl;
    else
        cout << cnt << nl;

    return 0;
}