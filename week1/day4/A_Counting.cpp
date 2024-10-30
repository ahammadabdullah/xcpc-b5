#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    int z = 0;
    if (x >= y)
    {
        z = 0;
    }
    else
    {
        z = (y - x) + 1;
    }
    cout << z << endl;
    return 0;
}