/**
 *    author:  ahammadabdullah
 *    created: 2024-11-11 16:06:51
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
bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.first > b.first;
}
int main()
{
    FAST_IO;

    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }
    vector<pair<int, string>> v;
    for (auto [str, idx] : mp)
    {
        v.push_back({idx, str});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto [idx, str] : v)
        cout << str.substr(sz(str) - 2);

    return 0;
}