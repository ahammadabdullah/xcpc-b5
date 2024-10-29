#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        string a;
        cin >> a;
        stack<int> lower, upper;
        int n = a.size(), idx;
        map<int, char> map;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'B')
            {
                if (!upper.empty())
                {
                    idx = upper.top();
                    map[idx] = '$';
                    upper.pop();
                }
                continue;
            }
            if (a[i] == 'b')
            {
                if (!lower.empty())
                {
                    idx = lower.top();
                    map[idx] = '$';
                    lower.pop();
                }
                continue;
            }
            map[i] = a[i];
            if (isupper(a[i]))
            {
                upper.push(i);
            }
            else if (islower(a[i]))
            {
                lower.push(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (map.count(i) && map[i] != '$')
            {
                cout << map[i];
            }
        }

        cout << endl;
    }
    return 0;
}