/**
 *    author:  ahammadabdullah
 *    created: 2025-01-02 22:58:54
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
ll lcm(ll a, ll b)
{
    return (1LL * (a * b)) / __gcd(a, b);
}
int main()
{
    FAST_IO;
    ll n;
    cin >> n;
    ll a = 1, b = n;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ll val = n / i;
            if (val != i && lcm(val, i) == n)
            {
                if (max(val, i) < max(a, b))
                {
                    a = val;
                    b = i;
                }
            }
        }
    }
    cout << a << " " << b << nl;
    return 0;
}