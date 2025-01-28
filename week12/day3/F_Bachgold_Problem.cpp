
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
    if (n % 2 == 0)
    {
        cout << n / 2 << nl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << n / 2 << nl;
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
    return 0;
}