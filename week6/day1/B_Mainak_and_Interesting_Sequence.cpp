/**
 *    author:  ahammadabdullah
 *    created: 2024-12-02 22:01:50
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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n + 1);
    bool flag = false;
    ll sum = 0;
    if (n > m)
    {
        flag = false;
    }
    else if (n % 2 == 0 && m % 2 == 0)
    {
        flag = true;
        for (int i = 1; i <= n - 2; i++)
        {
            v[i] = 1;
            sum++;
        }
        v[n - 1] = (m - sum) / 2;
        v[n] = (m - sum) / 2;
    }
    else if (n % 2 == 1 && m % 2 == 0)
    {
        flag = true;
        for (int i = 1; i <= n - 1; i++)
        {
            v[i] = 1;
            sum++;
        }
        v[n] = (m - sum);
    }
    else if (n % 2 == 1 && m % 2 == 1)
    {
        flag = true;
        for (int i = 1; i <= n - 1; i++)
        {
            v[i] = 1;
            sum++;
        }
        v[n] = (m - sum);
    }
    else if (n % 2 == 0 && m % 2 == 1)
    {
        flag = false;
    }
    if (flag)
    {
        yes;
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    else
    {
        no;
    }
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