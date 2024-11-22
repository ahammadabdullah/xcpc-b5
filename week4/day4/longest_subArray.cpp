
#include <bits/stdc++.h>

using namespace std;

// class Solution
// {
// public:
//     int lenOfLongestSubarr(vector<int> &arr, int k)
//     {
//         long long n = arr.size(), l = 0, r = 0, ans = 0, sum = 0;
//         while (r < n)
//         {
//             sum += arr[r];
//             if (sum == k)
//             {
//                 ans = max(ans, r - l + 1);
//             }
//             else
//             {
//                 while (l <= r && sum > k)
//                 {
//                     sum -= arr[l];
//                     l++;
//                 }
//             }
//             r++;
//         }
//         return ans;
//     }
// };
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &a, int k)
    {
        int n = a.size();
        int ans = 0;
        vector<long long int> v(n);
        v[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + a[i];
        }
        map<long long int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == k)
            {
                ans = max(ans, i + 1);
            }
            auto it = mp.find(v[i] - k);
            if (it == mp.end())
            {
                mp[v[i]] = i;
            }
            else
            {
                ans = max(ans, i - mp[v[i] - k]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {9, 0, -649, 206, 895};
    int k = 452;
    cout << sol.lenOfLongestSubarr(arr, k) << endl;
    return 0;
}
