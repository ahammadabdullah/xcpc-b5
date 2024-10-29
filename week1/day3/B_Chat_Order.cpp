#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    map<string, bool> list;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!list[v[i]])
        {
            cout << v[i] << endl;
            list[v[i]] = true;
        }
    }

    return 0;
}
