#include <bits/stdc++.h>
using namespace std;
#define vi vector<char>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n, row = 2;
        cin >> n;
        string x, y;
        cin >> x >> y;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == 'G' || x[i] == 'B')
                x[i] = 'X';
            if (y[i] == 'G' || y[i] == 'B')
                y[i] = 'X';
        }
        // cout << x << endl;
        // cout << y << endl;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (x[i] != y[i])
                flag = false;
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}
