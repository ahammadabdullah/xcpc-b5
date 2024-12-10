/**
 *    author:  ahammadabdullah
 *    created: 2024-12-10 08:17:28
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
    vector<int> v(n);
    inp(v);
    bool flag = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                sum += v[i];
            }
            else
            {
                sum -= v[i];
            }
        }
        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        yes;
    else
        no;
    return 0;
}