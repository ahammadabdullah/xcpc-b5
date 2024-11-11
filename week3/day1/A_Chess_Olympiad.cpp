/**
 *    author:  ahammadabdullah
 *    created: 2024-11-11 15:15:13
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define inp(a)        \
    for (auto &x : a) \
    cin >> x
#define out(a)              \
    for (const auto &x : a) \
        cout << x << ' ';   \
    cout << '\n'
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define debug(x) cerr << #x << " = " << (x) << endl;
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
int main()
{
    FAST_IO;

    int win, loss, draw;
    cin >> win >> draw >> loss;
    int totalGame = win + loss + draw;
    int gameLeft = 4 - totalGame;
    float acquired = win + (draw * .50);
    float opponent = loss + (draw * .50);
    if (acquired + gameLeft > opponent)
        yes;
    else
        no;
    return 0;
}