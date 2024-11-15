/**
 *    author:  ahammadabdullah
 *    created: 2024-11-15 07:11:10
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
    ll r = 0, cnt = 0, sum = 0;
    bool flag = false;
    while (r < n)
    {

        if (v[r] < 0)
        {
            if (!flag)
            {
                cnt++;
                flag = true;
            }
        }
        else if (v[r] > 0)
        {
            flag = false;
        }
        r++;
    }
    for (int i = 0; i < n; i++)
    {
        sum += abs(v[i]);
    }
    cout << sum << " " << cnt << nl;
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