

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

    map<string, int> mp;
    string s = to_string(n);

    for (int i = 1; i <= s.size(); i++)
    {
        string temp1;
        for (int j = 0; j < i; j++)
        {
            temp1.push_back('0');
        }
        mp[temp1] = mp.size() + 1;

        for (int j = 1; j <= pow(2, i) - 1; j++)
        {
            string temp2;
            int maxBit = __lg(j);
            int need = i - (maxBit + 1);
            for (int k = 0; k < need; k++)
            {
                temp2.push_back('0');
            }
            for (int k = maxBit; k >= 0; k--)
            {
                if (((j >> k) & 1) == 1)
                {
                    temp2.push_back('1');
                }
                else
                {
                    temp2.push_back('0');
                }
            }
            mp[temp2] = mp.size() + 1;
        }
    }

    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
        {
            temp.push_back('0');
        }
        else
        {
            temp.push_back('1');
        }
    }

    cout << mp[temp] << nl;

    return 0;
}