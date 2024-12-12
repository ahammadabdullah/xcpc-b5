/**
 *    author:  ahammadabdullah
 *    created: 2024-12-12 22:09:47
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
const int maxN = (1LL << 15);

vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    long long ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindrome.size(); j++)
        {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
        }
    }

    cout << (ans / 2) << nl;
}
int main()
{
    FAST_IO;
    markPalindrome();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}