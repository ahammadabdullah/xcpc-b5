/**
 *    author:  ahammadabdullah
 *    created: 2024-11-05 15:34:02
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
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
        }
        int l = 0, r = n - 1;
        bool flag = false;
        int min = 1;
        int max = n;
        while (l < r)
        {
            // debug(min);
            // debug(max);
            if (dq[l] == min || dq[l] == max)
            {
                if (dq[l] == min)
                    min++;
                else
                    max--;
                l++;
            }
            else if (dq[r] == min || dq[r] == max)
            {
                if (dq[r] == min)
                    min++;
                else
                    max--;
                r--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << nl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}