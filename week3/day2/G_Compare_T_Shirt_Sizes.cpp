/**
 *    author:  ahammadabdullah
 *    created: 2024-11-12 22:23:55
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
    string a, b;
    cin >> a >> b;
    int x = a.size() - 1;
    int y = b.size() - 1;
    if (a == b)
        cout << '=' << nl;
    else if (a[x] == 'M')
    {
        if (b[y] == 'S')
            cout << ">" << nl;
        else
            cout << "<" << nl;
    }
    else if (b[y] == 'M')
    {
        if (a[x] == 'L')
            cout << ">" << nl;
        else
            cout << "<" << nl;
    }
    else if (a[x] == 'S' && b[y] == 'L')
        cout << "<" << nl;
    else if (a[x] == 'L' && b[y] == 'S')
        cout << ">" << nl;
    else if (a[x] == b[y])
    {
        if (a[x] == 'S')
        {
            if (x > y)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if (x < y)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
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