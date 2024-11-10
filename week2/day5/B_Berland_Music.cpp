/**
 *    author:  ahammadabdullah
 *    created: 2024-11-10 14:58:44
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
        cin >> n;
        vector<int> v(n);
        inp(v);
        string s;
        cin >> s;
        vector<pair<int, int>> v1, v2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v2.push_back({v[i], i + 1});
            }
            else
            {
                v1.push_back({v[i], i + 1});
            }
        }
        sort(all(v2));
        sort(all(v1));
        map<int, int> v1Mp, v2mp;
        for (int i = 0; i < v2.size(); i++)
        {
            v2[i].first = i + 1;
            v1Mp[v2[i].second] = i + 1;
        }
        for (int i = 0; i < v1.size(); i++)
        {
            v1[i].first = v2.size() + i + 1;
            v2mp[v1[i].second] = v2.size() + i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout << v1Mp[i + 1] << " ";
            }
            else
            {
                cout << v2mp[i + 1] << " ";
            }
        }
        cout << nl;
    }
}