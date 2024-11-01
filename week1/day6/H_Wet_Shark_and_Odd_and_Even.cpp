#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    int min = INT_MAX;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
        if (x % 2 != 0 && x <= min)
            min = x;
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - min;
    }
    return 0;
}