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
