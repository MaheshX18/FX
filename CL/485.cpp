class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Count1 = 0;
        
        int max1 = 0;
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == 1){
                Count1++;
            }else{
                max1 = max(max1,Count1);
                Count1 = 0;
            }
        }
        max1 = max(max1,Count1);
        return max1;
    }
};