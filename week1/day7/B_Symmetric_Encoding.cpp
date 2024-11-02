#include <bits/stdc++.h>
using namespace std;
int get_idx(int n, int idx)
{
    return n - 1 - idx;
}
char get_key(map<char, int> m, int idx)
{
    for (auto [ch, i] : m)
    {
        if (idx == i)
            return ch;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        string s, S;
        cin >> n;
        cin >> s;
        set<char> set1;
        map<char, int> uniq;
        for (int i = 0; i < n; i++)
        {
            set1.insert(s[i]);
        }
        int temp_i = 0;
        for (auto ch : set1)
        {

            uniq.insert({ch, temp_i});
            temp_i++;
        }
        // for (auto [ch, idx] : uniq)
        // {
        //     cout << ch << " " << idx << " ";
        // }
        for (auto ch : s)
        {
            int idx = get_idx(uniq.size(), uniq[ch]);
            char key = get_key(uniq, idx);
            S.push_back(key);
        }
        cout << S << endl;
    }
    return 0;
}