
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

const int maxN = 1e6 + 9;
vector<int> Div(maxN);

void solve()
{
    int n;
    cin >> n;

    cout << Div[n] << nl;
}
int main()
{
    FAST_IO;
    for (int i = 1; i < maxN; i++)
    {
        for (int j = i; j < maxN; j += i)
        {
            Div[j]++;
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}