class Solution 
{
public:
    int longestPalindrome(string s)
    {

        if (s.size() == 0)
        {
            return 0;
        }
        if(s.size() == 1)
        {
            return 1;
        }

        
        
        unordered_map<char,int> f;

        for (int i = 0; i < s.size(); i++)
        {
            f[s[i]]++;
        }
        if (f.size() == 1)
        {
            return s.size();
        }

        int count = 0;
        bool oddFound = false;
        for (auto i : f)
        {
            int val = i.second;
            if(val % 2 == 0)
            {
                count += val;
            }
            else
            {
                oddFound = true;
            }
        }

        if(oddFound)
        {
            for(auto i : f)
            {
                int val = i.second;
                if(val % 2 != 0)
                {
                    count += val - 1;
                }
            }
        }
        else
        {
            return count;
        }

        return count + 1;
    }
};
