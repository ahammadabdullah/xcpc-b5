#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != y[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}