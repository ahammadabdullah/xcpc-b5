#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    map<string, int> cnt;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        cnt[s]++;
        if (cnt[s] == 1)
            cout << "OK" << endl;
        else
            cout << s << cnt[s] - 1 << endl;
    }

    return 0;
}