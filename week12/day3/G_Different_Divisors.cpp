
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
const int maxN = 20030;

vector<int> primes;
vector<bool> isPrime(maxN, true);

void solve()
{
    int d;
    cin >> d;

    int st = *lower_bound(all(primes), 1 + d);
    int en = *lower_bound(all(primes), st + d);
    cout << st * en << nl;
}
int main()
{
    FAST_IO;
    for (int i = 2; i <= maxN; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i + i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}