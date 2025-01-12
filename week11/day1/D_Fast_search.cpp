/**
 *    author:  ahammadabdullah
 *    created: 2025-01-12 22:43:26
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
    vector<int> v(n);
    inp(v);
    sort(all(v));
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto left = lower_bound(all(v), l);
        auto right = upper_bound(all(v), r);
        cout << distance(left, right) << " ";
    }
    cout << nl;
    return 0;
}