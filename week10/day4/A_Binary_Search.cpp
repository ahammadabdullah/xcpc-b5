/**
 *    author:  ahammadabdullah
 *    created: 2025-01-05 21:52:53
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

int main()
{
    FAST_IO;

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    inp(v);
    while (k--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] == x)
            {
                flag = true;
                break;
            }
            else if (x > v[mid])

                l = mid + 1;
            else
                r = mid - 1;
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}