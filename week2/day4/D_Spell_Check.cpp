#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x, y;
        cin >> x;
        y = "Timur";
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if (x == y)
            yes;
        else
            no;
    }
    return 0;
}