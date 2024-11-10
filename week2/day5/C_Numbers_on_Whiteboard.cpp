/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 15:15:02
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
        priority_queue<int> pq;
        for (int i = n; i >= 1; i--)
        {
            pq.push(i);
        }
        int a, b;
        ll c;
        cout << 2 << nl;
        while (pq.size() > 1)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout << a << " " << b << endl;
            c = (a + b + 1) / 2;
            pq.push(c);
        }
    }
    return 0;
}