/**
 *    author:  ahammadabdullah
 *    created: 2024-12-19 21:46:08
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

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0 || i % 4 == 1)
        {
            s.push_back('a');
        }
        else
        {
            s.push_back('b');
        }
    }
    cout << s << nl;
    return 0;
}