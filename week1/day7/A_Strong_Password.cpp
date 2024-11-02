#include <bits/stdc++.h>
using namespace std;

int get_idx(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;

        int i = get_idx(s);
        if (i != -1)
        {
            char c = (s[i] == 'z') ? 'a' : char(s[i] + 1);
            s.insert(i, 1, c);
        }
        else
        {
            char c = (s[0] == 'z') ? 'a' : char(s[0] + 1);
            s.insert(0, 1, c);
        }

        cout << s << endl;
    }
    return 0;
}
