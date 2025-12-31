class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // sort(nums.begin(),nums.end());
        int low = 0;
        int high = 0;

        int result = INT_MAX;
        int sum = 0;

        while(high < nums.size()){
            sum = sum + nums[high];
            while(sum >= target){
                int len = high - low + 1;
                result = min(result, len);
                sum = sum - nums[low];
                low++;
            }
            high++;
            
            // if(nums[low] + nums[high] == target){
            //     sum = high - low;
            //     result = min(sum,result);
            //     low++;
            // }else if(nums[low] + nums[high] < target){
            //     sum++;
            //     high++;
            // }else if(nums[low] + nums[high] > target){
            //     low++;
            // }

        }
        if(result == INT_MAX){
            return 0;
        }else{
            return result;

        }
    }
    
};