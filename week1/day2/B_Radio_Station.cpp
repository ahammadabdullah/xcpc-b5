#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> count;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        count[b + ';'] = a;
    }
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << a << " " << b << " #" << count[b] << endl;
    }

    return 0;
}