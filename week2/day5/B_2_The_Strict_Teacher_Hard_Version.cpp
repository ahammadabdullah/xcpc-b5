/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 15:43:13
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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m);
        inp(v);
        sort(all(v));
        while (q--)
        {
            int pos;
            cin >> pos;
            if (pos < v[0])
            {
                cout << v[0] - 1 << nl;
                continue;
            }

            if (pos > v[m - 1])
            {
                cout << pos - v[m - 1] << nl;
                continue;
            }

            auto it = lower_bound(all(v), pos);
            // int left = (lb != v.begin()) ? abs(*(lb - 1) - pos) : INT_MAX;
            // int right = (lb != v.end()) ? abs(*lb - pos) : INT_MAX;
            // cout << min(left, right) << nl;
            auto jt = it;
            jt--;

            int left = *jt, right = *it;
            int mid = (right + left) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << nl;
        }
    }
    return 0;
}