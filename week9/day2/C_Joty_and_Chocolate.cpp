/**
 *    author:  ahammadabdullah
 *    created: 2024-12-27 18:03:18
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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b) * b);
}

int main()
{
    FAST_IO;

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll aCnt = n / a;
    ll bCnt = n / b;
    ll bothCnt = n / LCM(a, b);
    aCnt -= bothCnt;
    bCnt -= bothCnt;
    ll m = max(p, q);
    aCnt *= p;
    bCnt *= q;
    bothCnt *= m;
    ll ans = aCnt + bCnt + bothCnt;
    cout << ans << nl;

    return 0;
}