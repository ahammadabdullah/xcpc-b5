/**
 *    author:  ahammadabdullah
 *    created: 2024-12-11 20:44:42
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
    int n, ved, var;
    cin >> n >> ved >> var;
    vector<int> v(n);
    inp(v);
    int vedChair = *max_element(all(v));
    int totalHeight = accumulate(all(v), 0);
    int varChair = totalHeight - vedChair;

    ved += vedChair;
    var += varChair;
    if (ved > var)
        cout << "Ved" << nl;
    else if (ved < var)
        cout << "Varun" << nl;
    else
        cout << "Equal" << nl;
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