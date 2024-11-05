/**
 *    author:  ahammadabdullah
 *    created: 2024-11-05 14:19:52
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

    int n;
    cin >> n;

    int sr = 1;
    set<pii> st;
    multiset<pii> ml;
    while (n--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            st.insert({sr, val});
            ml.insert({val, -sr});
            sr++;
        }
        else if (op == 2)
        {
            pii pair = *st.begin();
            int pos = pair.first;
            int val = pair.second;
            cout << pos << " ";
            st.erase(st.begin());
            ml.erase({val, -pos});
        }
        else if (op == 3)
        {
            pii pair = *ml.rbegin();
            int pos = -pair.second;
            int val = pair.first;
            cout << pos << " ";
            ml.erase(--ml.end());
            st.erase({pos, val});
        }
    }
    cout << nl;
    return 0;
}