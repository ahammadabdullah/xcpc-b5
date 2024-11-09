#include <bits/stdc++.h>
using namespace std;
#define pis pair<int, string>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int wheels;
        cin >> wheels;
        vector<int> v(wheels);
        for (int i = 0; i < wheels; i++)
        {
            cin >> v[i];
        }
        vector<pis> pair;
        for (int i = 0; i < wheels; i++)
        {
            int x;
            string y;
            cin >> x >> y;
            pair.push_back({x, y});
        }
        for (int i = 0; i < wheels; i++)
        {
            auto [cnt, val] = pair[i];

            for (int j = 0; j < cnt; j++)
            {
                if (val[j] == 'U')
                {
                    if (v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
                else if (val[j] == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
            }
        }
        for (auto va : v)
        {
            cout << va << " ";
        }
        cout << endl;
    }
    return 0;
}