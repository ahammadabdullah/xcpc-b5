/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 16:27:38
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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        bool flag = false;
        int cnt = 0, res = 0;
        if (c == 'g')
        {
            cout << 0 << nl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }
            if (s[i] == c && (!flag))
            {
                flag = true;
                cnt = 0;
            }
            if (flag)
                cnt++;
        }
        cout << res << nl;
    }
    return 0;
}
