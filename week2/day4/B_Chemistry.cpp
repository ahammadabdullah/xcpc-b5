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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        unordered_map<char, int> list;
        for (char ch : s)
            list[ch]++;
        int length = n - m, odd = 0;
        for (auto [key, val] : list)
        {
            if (val % 2 != 0)
                odd++;
        }
        debug(length);
        debug(odd);
        bool flag;
        if (length % 2 == 0)
        {
            flag = (odd <= m) && ((m - odd) % 2 == 0);
        }

        else
        {
            flag = (odd <= m + 1) && ((m - odd + 1) % 2 == 0);
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}