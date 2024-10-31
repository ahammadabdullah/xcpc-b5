#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int x = s.size();
    for (int i = x; i < 4; i++)
    {
        cout << 0;
    }
    cout << s << endl;
    return 0;
}