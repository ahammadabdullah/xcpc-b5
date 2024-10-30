#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = c; i <= b; i += c)
    {
        if (i >= a && i <= b)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << -1 << endl;
    return 0;
}