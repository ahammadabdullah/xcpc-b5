/**
 *    author:  ahammadabdullah
 *    created: 2024-11-11 15:25:31
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n <= 3)
        {
            cout << 0 << nl;
            continue;
        }
        sort(all(v));
        int minRange = min({v[n - 3] - v[0],
                            v[n - 1] - v[2],
                            v[n - 2] - v[1]});

        cout << minRange << nl;
    }

    return 0;
}

// for two max element [n-3]-[0]
// for two min element [n-1]-[2]
// for two min and max element [n-2]-[1]