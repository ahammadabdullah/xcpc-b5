/**
 *    author:  ahammadabdullah
 *    created: 2024-12-11 20:57:42
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
    string v, v1;
    cin >> v >> v1;
    vector<int> diff;

    if (n == 1)
    {
        if (v[0] != v1[0])
            no;
        else
            yes;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == '0')
            v[i] = '1';
        else if (v[i] == '1')
            v[i] = '0';
        if (v[i + 1] == '0')
            v[i + 1] = '1';
        else if (v[i + 1] == '1')
            v[i + 1] = '0';
    }
    if (v == v1)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
