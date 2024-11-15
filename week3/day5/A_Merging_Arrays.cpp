/**
 *    author:  ahammadabdullah
 *    created: 2024-11-15 06:52:02
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    inp(a);
    inp(b);
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (a[l] < b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }
    }
    while (l < n)
    {
        c.push_back(a[l]);
        l++;
    }
    while (r < m)
    {
        c.push_back(b[r]);
        r++;
    }

    for (auto val : c)
        cout << val << " ";

    cout << nl;
}

int main()
{
    FAST_IO;

    solve();
    return 0;
}