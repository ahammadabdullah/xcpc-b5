

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
    string s1, s2;
    cin >> s1 >> s2;
    int s1Pos = 0, s2Pos = 0;
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '+')
        {
            s1Pos++;
        }
        else
        {
            s1Pos--;
        }
    }
    int unrecCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '+')
        {
            s2Pos++;
        }
        else if (s2[i] == '-')
        {
            s2Pos--;
        }
        else
        {
            unrecCnt++;
        }
    }

    int ans = 0, wrong = 0;

    ll len = pow(2, unrecCnt) - 1;
    s2Pos -= unrecCnt;
    if (s2Pos == s1Pos)
    {

        ans++;
    }
    else
    {
        wrong++;
    }

    for (int i = 1; i <= len; i++)
    {
        int maxBit = __lg(i);
        int count = 0;
        for (int j = maxBit; j >= 0; j--)
        {
            if (((i >> j) & 1) == 1)
            {
                count += 2;
            }
        }
        if (count + s2Pos == s1Pos)
        {
            ans++;
        }
        else
        {
            wrong++;
        }
    }

    int total = ans + wrong;
    double percentage = ((double)ans / total);
    cout << fixed << setprecision(12) << percentage << nl;
    return 0;
}