#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    float t;
    cin >> a >> b >> t;
    t += 0.5;
    int n = t / a;
    int z = n * b;
    cout << z << endl;
    return 0;
}