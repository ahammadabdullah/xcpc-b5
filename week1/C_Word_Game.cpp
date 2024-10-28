// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector<string> a, b, c;
//         int x = 0, y = 0, z = 0;
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             a.push_back(s);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             b.push_back(s);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             c.push_back(s);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if ((find(b.begin(), b.end(), a[i]) != b.end()) && (find(c.begin(), c.end(), a[i]) != c.end()))
//             {
//             }
//             else if ((find(b.begin(), b.end(), a[i]) != b.end()) || (find(c.begin(), c.end(), a[i]) != c.end()))
//             {
//                 x++;
//             }
//             else
//             {
//                 x += 3;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if ((find(a.begin(), a.end(), b[i]) != a.end()) && (find(c.begin(), c.end(), b[i]) != c.end()))
//             {
//             }
//             else if ((find(a.begin(), a.end(), b[i]) != a.end()) || (find(c.begin(), c.end(), b[i]) != c.end()))
//             {
//                 y++;
//             }
//             else
//             {
//                 y += 3;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if ((find(a.begin(), a.end(), c[i]) != a.end()) && (find(b.begin(), b.end(), c[i]) != b.end()))
//             {
//             }
//             else if ((find(a.begin(), a.end(), c[i]) != a.end()) || (find(b.begin(), b.end(), c[i]) != b.end()))
//             {
//                 z++;
//             }
//             else
//             {
//                 z += 3;
//             }
//         }
//         cout << x << " " << y << " " << z << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0, z = 0;
        int n;
        cin >> n;
        vector<string> a(n), b(n), c(n);
        map<string, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            cnt[b[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            cnt[c[i]]++;
        }
        for (string word : a)
        {
            if (cnt[word] == 2)
                x++;
            else if (cnt[word] == 1)
                x += 3;
        }
        for (string word : b)
        {
            if (cnt[word] == 2)
                y++;
            else if (cnt[word] == 1)
                y += 3;
        }
        for (string word : c)
        {
            if (cnt[word] == 2)
                z++;
            else if (cnt[word] == 1)
                z += 3;
        }

        cout << x << " " << y << " " << z << '\n';
    }
    return 0;
}