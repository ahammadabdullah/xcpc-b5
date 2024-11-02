#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long int> v(n);
    unordered_map<int, int> frq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        frq[v[i]]++;
    }
    int cnt = 0;
    for (auto [key, val] : frq)
    {
        cnt = max(cnt, val);
    }
    cout << cnt << endl;
    return 0;
}