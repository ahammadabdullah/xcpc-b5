/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 16:53:21
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
    string a, b;
    cin >> a;
    vector<int> v(m);
    set<int> st;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x--;
        st.insert(x);
    }
    cin >> b;
    multiset<char> c;
    for (int i = 0; i < m; i++)
    {
        c.insert(b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (st.find(i) != st.end())
        {
            a[i] = *c.begin();
            c.erase(c.begin());
        }
    }
    cout << a << nl;
}
int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}