/**
 *    author:  ahammadabdullah
 *    created: 2024-11-27 20:31:56
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
int main()
{
    FAST_IO;

    int x, y, z;
    cin >> x >> y >> z;
    int cnt = y * z;
    if (x > cnt)

        cout << x - cnt << nl;
    else if (x == cnt)
        cout << 0 << nl;
    else
        cout << -1 << nl;
    return 0;
}