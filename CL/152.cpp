class Solution {
public:
    int maxProduct(vector<int>& nums) {

        if(nums.size() == 1)
        {
            return nums[0];
        }
        
        int maxEnding = nums[0];
        int minEnding = nums[0];


        int result = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int v1 = nums[i];
            int v2 = maxEnding * nums[i];
            int v3 = minEnding * nums[i];

            maxEnding = max(v1,max(v2,v3));
            minEnding = min(v1,min(v2,v3));

            result = max(result,max(maxEnding,minEnding));
        }

        return result;
    }
};