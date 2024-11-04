/**
 *    author:  ahammadabdullah
 *    created: 2024-11-04 15:53:34
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
    int n, cnt = 0, day = 1;
    multiset<int> ml;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    while (!ml.empty())
    {
        auto it = ml.lower_bound(day);
        if (it != ml.end())
        {
            cnt++;
            ml.erase(it);
        }
        else
        {
            break;
        }
        day++;
    }
    cout << cnt << nl;
    return 0;
}