/**
 *    author:  ahammadabdullah
 *    created: 2024-11-22 05:38:33
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

    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    inp(v);
    ll l = 0, r = 0, uCnt = 0, cnt = 0;
    map<int, int> mp;

    while (r < n)
    {
        if (++mp[v[r]] == 1)
        {
            uCnt++;
        }
        while (uCnt > k)
        {
            if (--mp[v[l]] == 0)
            {
                uCnt--;
            }
            l++;
        }
        cnt += (r - l + 1);
        r++;
    }
    cout << cnt << nl;

    return 0;
}

// if (mp[s[r]]++ == 0)
// {
//     uCnt++;
// }
// while (uCnt > k)
// {
//     if (--mp[s[l]] == 0)
//     {
//         uCnt--;
//     }
//     l++;
// }
// cnt += (r - l + 1);
// r++;