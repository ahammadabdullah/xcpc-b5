
class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int n = s.size();
        map<char, int> mp;
        long long l = 0, r = 0, uCnt = 0, cnt = -1;
        while (r < n)
        {
            mp[s[r]]++;
            if (mp.size() == k)
            {
                cnt = max(cnt, r - l + 1);
            }
            else
            {
                while (mp.size() > k && l <= r)
                {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                    {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return cnt;
    }
};

// class Solution
// {
// public:
//     int longestKSubstr(string s, int k)
//     {
//         int n = s.size();
//         map<char, int> mp;
//         long long l = 0, r = 0, uCnt = 0, cnt = -1;
//         while (r < n)
//         {
//             if (mp[s[r]] == 0)
//             {
//                 uCnt++;
//             }
//             mp[s[r]]++;
//             while (uCnt > k)
//             {
//                 if (--mp[s[l]] == 0)
//                 {
//                     uCnt--;
//                 }
//                 l++;
//             }
//             if (uCnt == k)
//             {
//                 cnt = max(cnt, (r - l + 1));
//             }
//             r++;
//         }
//         return cnt;
//     }
// };