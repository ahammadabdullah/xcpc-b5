/**
 *    author:  ahammadabdullah
 *    created: 2024-12-29 22:57:22
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
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int s = count(all(str), 's');
    int p = count(all(str), 'p');
    bool flag = false;
    if (s == 0 || p == 0)
        flag = true;
    else if (s == 1 && p == 1)
    {
        if (str.front() == 's' || str.back() == 'p')
            flag = true;
    }
    else if (s == 1 && str.front() == 's')
        flag = true;
    else if (p == 1 && str.back() == 'p')
        flag = true;
    if (flag)
        yes;
    else
        no;
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