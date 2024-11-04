/**
 *    author:  ahammadabdullah
 *    created: 2024-11-04 15:54:40
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

    int n, m;
    cin >> n >> m;
    vector<int> V(m + 1), v(n + 1);
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        V[i] = (st.size());
    }
    for (int i = 1; i <= m; i++)
    {
        int m;
        cin >> m;
        cout << V[m] << nl;
    }
    return 0;
}