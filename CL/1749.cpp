class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currMax = 0;
        int maxSum = 0;
        int currMin = 0;
        int minSum = 0;

        for (int num : nums)
        {
            //for Maximum subarray sum 
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            //for minimun subarray sum

            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

        }

        return max(maxSum, abs(minSum));
    }
};