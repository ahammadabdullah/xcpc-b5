

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
#define MOD 1000000007

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m), ans;
    inp(a);
    inp(b);

    bool flag = true;
    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if (i < n && (j >= m || a[i] <= b[j]))
        {
            if (a[i] > k)
            {
                flag = false;
                break;
            }
            if (a[i] == 0)
            {
                k++;
            }
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            if (b[j] > k)
            {
                flag = false;
                break;
            }
            if (b[j] == 0)
            {
                k++;
            }
            ans.push_back(b[j]);
            j++;
        }
    }
    if (flag)
    {
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << nl;
    }
    else
        -1;
}

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}