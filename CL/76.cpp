class Solution {
public:

    bool rightNeedIndex(vector<int> &have,vector<int> &need)
    {   
        for(int i = 0; i < 256; i++)
        {
            if(have[i] < need[i])
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {

        int low = 0;
        int high = 0;

        int res = INT_MAX;
        int start = -1;

        if(s.size() < t.size())
        {
            return "";
        }

        // string str = "";
        vector<int> have(256,0);
        vector<int> need(256,0);

        for(int i=0;i<t.size();i++)
        {
            need[t[i]]++;
        }

        for(high = 0; high < s.size(); high++)
        {
            have[s[high]]++;

            while(rightNeedIndex(have,need))
            {
                int len = high - low + 1;
                if(res > len) 
                {
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if (res == INT_MAX){
            return "";
        }
        return s.substr(start,res);
    }
};