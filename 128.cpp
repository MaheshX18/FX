//Brute force using sorting o(nlogn)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return 1;

        sort(nums.begin(),nums.end());
        
        int mainRes = 1;
        int temp = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i]-1 == nums[i-1])
            {
                temp++;
                mainRes = max(mainRes,temp);
            }else if(nums[i] == nums[i-1]){
                continue;
            }else{
                temp = 1;
            }
        }

        return mainRes;
        

    }
};



// Optimal Solution usinng hashmap

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;


        int longest = 1;
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }

        for(int it : st)
        {
            if(st.find(it-1) == st.end()) {
                int cnt = 1;
                int x = it;

                while(st.find(x+1) != st.end())
                {
                    x = x+1;
                    cnt = cnt+1;
                }
                longest = max(longest,cnt);
            }
        }

        return longest;       

    }
};
