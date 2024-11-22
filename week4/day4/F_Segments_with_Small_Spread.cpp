/**
 *    author:  ahammadabdullah
 *    created: 2024-11-22 06:05:56
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
    vector<ll> v(n);
    inp(v);
    ll l = 0, r = 0, cnt = 0;
    multiset<ll> st;
    while (r < n)
    {
        st.insert(v[r]);
        if (abs(*prev(st.end()) - *st.begin()) <= k)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while (!st.empty() && abs(*prev(st.end()) - *st.begin()) > k)
            {
                st.erase(st.find(v[l]));
                l++;
            }
            if (abs(*prev(st.end()) - *st.begin()) <= k)
            {
                cnt += (r - l + 1);
            }
        }
        r++;
    }
    cout << cnt << nl;

    return 0;
}

// int main()
// {
//     FAST_IO;

//     ll n, k;
//     cin >> n >> k;
//     vector<ll> v(n);
//     inp(v);
//     ll l = 0, r = 0, cnt = 0;
//     multiset<ll> st;
//     while (r < n)
//     {
//         st.insert(v[r]);

//         while (!st.empty() && abs(*prev(st.end()) - *st.begin()) > k)
//         {
//             st.erase(st.find(v[l]));
//             l++;
//         }
//         cnt += (r - l + 1);
//         r++;
//     }
//     cout << cnt << nl;

//     return 0;
// }