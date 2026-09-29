class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int low = 0;
        int high = 0;
        int zeroCnt = 0;
        int res = INT_MIN;

        while(high < nums.size())
        {
            if(nums[high ] == 0)
            {
                zeroCnt++;
            }
            while(zeroCnt > 1)
            {
                if(nums[low] ==0)
                    zeroCnt--;
                
                low++;
            }

            res = max(res,high-low);
            high++;
        }
        return res;
    }
};