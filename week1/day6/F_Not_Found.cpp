#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

int main()
{
    FAST_IO;
    string s;
    cin >> s;
    vector<bool> v(26, 0);
    for (char ch : s)
        v[ch - 'a'] = 1;
    for (int i = 0; i < 26; i++)
    {
        if (!v[i])
        {
            cout << char('a' + i) << nl;
            return 0;
        }
    }
    cout << "None" << nl;
    return 0;
}