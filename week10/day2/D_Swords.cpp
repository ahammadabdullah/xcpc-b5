
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
    vector<ll> v(n);
    ll val = INT_MIN;
    ll sum = 0, gcd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        val = max(val, v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != val)
        {
            ll diff = val - v[i];
            sum += diff;
            gcd = __gcd(diff, gcd);
        }
    }

    cout << sum / gcd << " " << gcd << nl;
    return 0;
}