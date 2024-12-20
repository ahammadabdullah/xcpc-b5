/**
 *    author:  ahammadabdullah
 *    created: 2024-12-20 17:13:53
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    inp(v);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
    }
    int mx = 0;
    for (int val : st)
    {
        if (val == mx)
            mx++;
        else
            break;
    }
    v.push_back(mx);
    k = k % (n + 1);
    int srt = n - k + 1, end = n - k;
    for (int i = srt; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    for (int i = 0; i < end; i++)
    {
        cout << v[i] << " ";
    }
    cout << nl;
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