class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int low = 0;
        int high = 0;

        unordered_map<char,int> freq;
        int res = 0;

        while(high < s.size())
        {
            freq[s[high]]++;
            
            if(freq.size() == high - low + 1)
            {
                res = max(res, high - low + 1);
            }
            while(freq.size() < high - low + 1)
            {
                freq[s[low]]--;
                if(freq[s[low]] == 0)
                {
                    freq.erase(s[low]);
                }
                low++;
            }
            high++;
        }
        return res;
    }
};