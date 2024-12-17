
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
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), V(n);
    inp(v);
    inp(V);
    int maxV = *max_element(all(V));
    int diff = INT_MIN;
    int diffZero = INT_MIN;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < V[i])
        {
            flag = false;
            break;
        }
        if (V[i] == 0)
        {
            diffZero = max(diffZero, v[i]);
        }
        else
        {
            if (diff == INT_MIN)
            {
                diff = v[i] - V[i];
            }
            else if (v[i] - V[i] != diff)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag && (diff == INT_MIN || diff >= diffZero))
        yes;
    else
        no;
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