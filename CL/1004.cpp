class Solution {
public:

    
    int longestOnes(vector<int>& nums, int k) {

        int n = nums.size();
        int low = 0;
        int high = 0;
        int result = INT_MIN;
        vector<int> freq(2,0);

        for(high = 0; high < n; high++){
            freq[nums[high]]++;
            int len = high - low + 1;
            int maxCnt = freq[1];
            int diff = len - maxCnt;

            while(diff > k) {
                freq[nums[low]]--;
                low++;
                len = high - low + 1;
                maxCnt = freq[1];
                diff = len - maxCnt;
            }

            result = max(len, result);
        }
        return result;
    }
};