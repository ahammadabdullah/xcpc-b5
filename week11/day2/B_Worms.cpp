/**
 *    author:  ahammadabdullah
 *    created: 2025-01-14 21:24:45
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
    vector<int> v;
    v.resize(n);
    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        auto it = lower_bound(all(v), m);
        cout << (it - v.begin() + 1) << nl;
    }
    return 0;
}