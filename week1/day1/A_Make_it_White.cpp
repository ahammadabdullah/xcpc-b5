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
        int n;
        string s;
        cin >> n >> s;
        // cout << s << endl;
        int first = s.find('B');
        int last = s.rfind('B');
        int cnt = last - first;
        cout << cnt + 1 << '\n';
    }
    return 0;
}