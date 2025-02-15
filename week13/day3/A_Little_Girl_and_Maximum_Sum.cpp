
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
int main()
{
    FAST_IO;
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    inp(v);
    int arr[n + 1] = {0}, preSum[n + 1] = {0};
    vector<int> cnt;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        arr[l]++;
        arr[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        preSum[i] = arr[i] + preSum[i - 1];
        cnt.push_back(preSum[i]);
    }

    sort(rall(cnt));
    sort(rall(v));
    ll ans = 0;

    for (int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] == 0)
        {
            break;
        }
        ans += 1LL * cnt[i] * v[i];
    }
    cout << ans << nl;
    return 0;
}