/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 15:04:56
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
        inp(v);
        priority_queue<ll> pq;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    cnt += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(v[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}