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
        string a, b;
        cin >> a;
        for (char x : a)
        {

            if (x == 'B')
            {
                for (int i = b.size() - 1; i >= 0; i--)
                {
                    if (isupper(b[i]))
                    {
                        b.erase(i, 1);
                        break;
                    }
                }
            }
            else if (x == 'b')
            {
                for (int i = b.size() - 1; i >= 0; i--)
                {
                    if (islower(b[i]))
                    {
                        b.erase(i, 1);
                        break;
                    }
                }
            }
            else
            {
                b.push_back(x);
            }
        }
        cout << b << endl;
    }
    return 0;
}