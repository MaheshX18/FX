class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<string> sortedStrings;

        for(int i = 0 ; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(str.begin(),str.end());
            sortedStrings.push_back(str);
        }

        vector<vector<string>> res;
        // vector<pair<bool> visited(sortesStrings.size(); false);

        unordered_map<string,vector<int>> mp;
        for(int i = 0; i <sortedStrings.size(); i++)
        {
            mp[sortedStrings[i]].push_back(i);
        }

        
        for(auto &it : mp)
        {
            vector<string> currGroup;

            for(int index : it.second)
            {
                currGroup.push_back(strs[index]);
            }
            res.push_back(currGroup);
        }

       

        return res;

    }
};
