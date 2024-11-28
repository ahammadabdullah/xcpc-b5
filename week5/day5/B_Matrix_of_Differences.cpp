/**
 *    author:  ahammadabdullah
 *    created: 2024-11-28 22:07:38
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
    int n;
    cin >> n;
    vector<int> v(n * n);
    int left = 1, right = n * n;
    for (int i = 0; i < n * n; i++)
    {
        if (i % 2 == 0)
        {
            v[i] = left;
            left++;
        }
        else
        {
            v[i] = right;
            right--;
        }
    }
    left = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = left; j < left + n; j++)
                cout << v[j] << " ";
            cout << nl;
            left += n;
        }
        else
        {
            for (int j = (n + left) - 1; j >= left; j--)
                cout << v[j] << " ";
            cout << nl;
            left += n;
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