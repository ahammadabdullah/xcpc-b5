#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for (auto val : v)
    // {
    //     cout << val << " ";
    // }
    int sereja = 0;
    int dima = 0;
    int l = 0;
    int r = n - 1;
    int cnt = 1;
    while (l <= r)
    {
        if (cnt % 2 == 0)
        {
            if (v[l] >= v[r])
            {
                dima += v[l];
                l++;
            }
            else
            {
                dima += v[r];
                r--;
            }
        }
        else
        {
            if (v[l] >= v[r])
            {
                sereja += v[l];
                l++;
            }
            else
            {
                sereja += v[r];
                r--;
            }
        }
        cnt++;
    };
    cout << sereja << " " << dima;
    return 0;
}