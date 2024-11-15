class Solution
{
public:
    int search(string pat, string txt)
    {
        int n = txt.size();
        int k = pat.size();
        vector<int> freq(26, 0);
        vector<int> winFreq(26, 0);
        for (int i = 0; i < k; i++)
        {
            freq[pat[i] - 'a']++;
        }
        int l = 0, r = 0;
        int cnt = 0;
        while (r < n)
        {
            winFreq[txt[r] - 'a']++;
            if (r - l + 1 == k)
            {
                bool flag = true;
                for (int i = 0; i < 26; i++)
                {
                    if (freq[i] != winFreq[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    cnt++;
                winFreq[txt[l] - 'a']--;
                l++;
                r++;
            }
            else
                r++;
        }
        return cnt;
    }
};