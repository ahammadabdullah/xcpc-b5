/**
 *    author:  ahammadabdullah
 *    created: 2024-11-04 16:02:43
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
class cmp
{
public:
    bool operator()(pii a, pii b)
    {
        return a.first > b.first;
    }
};

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;

        for (auto [key, val] : mp)
        {
            pq.push(val);
            // cout << key << " " << val << nl;
        }
        // cout << "-----------" << nl;

        while (pq.size() > 1)
        {

            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            y--;
            x--;
            if (x > 0)
            {
                pq.push(x);
            }
            if (y > 0)
            {
                pq.push(y);
            }
        }
        int cnt = 0;
        while (!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}

// while (mp.size() > 1)
// {
//     auto start = mp.begin();
//     auto it = next(start);
//     cout << start->first << " " << start->second << nl;
//     cout << it->first << " " << it->second << nl;
//     cout << "-----------" << nl;
//     start->second--;
//     it->second--;
//     if (start->second == 0)
//         mp.erase(start);
//     if (it->second == 0)
//         mp.erase(it);
// }
// cout << mp.size() << nl;