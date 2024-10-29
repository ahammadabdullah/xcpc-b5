#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

using namespace std;
int main()
{
    FAST_IO;
    int n;
    cin >> n;
    map<string, bool> list;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        if (!list[x])
        {
            cout << "NO" << nl;
            list[x] = true;
        }
        else if (list[x])
        {
            cout << "YES" << nl;
        }
    }
    return 0;
}