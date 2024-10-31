#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    int z = 0;
    if (x == y)
        z = x + y;
    else if (x - 1 == y || y - 1 == x)
        z = x + y;
    else if (x > y)
    {
        z = x + (x - 1);
    }
    else
    {
        z = y + (y - 1);
    }
    cout << z << endl;
    return 0;
}