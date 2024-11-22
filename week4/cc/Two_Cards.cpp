/**
 *    author:  ahammadabdullah
 *    created: 2024-11-20 20:33:13
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
    vector<int> a(n), b(n);
    inp(a);
    inp(b);

    map<int, int> mp, MP;
    for (int i = 0; i < n; i++)
    {
        mp.insert({a[i], i});
        MP.insert({b[i], i});
    }
    int alice = 0, bob = 0;

    auto it = prev(MP.end());
    int b_card = it->first;
    int indexB = it->second;

    alice += max(a[indexB], b[indexB]);

    MP.erase(it);
    mp.erase(a[indexB]);

    auto it2 = prev(mp.end());
    int a_card = it2->first;
    int indexA = it2->second;

    bob += max(b[indexA], a[indexA]);

    mp.erase(it2);
    MP.erase(b[indexA]);

    if (alice > bob)
        yes;
    else
        no;
    // cout << alice << nl;
    // cout << bob << nl;
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