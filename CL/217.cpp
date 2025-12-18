class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // sort(nums.begin(),nums.end());

        // int start =0;
        // int end = nums.size()-1;

        // while(start<end){

        //     if(nums[start] == nums[end]){
        //         return true;
        //     }
        //     else if(nums[start] == nums[start + 1]){
        //         return true;

        //     }
        //     start++;

        // }
        // return false;

        unordered_set<int> set1(nums.begin(),nums.end());

        if(nums.size()>set1.size()){
            return true;
        }else{
           return false;
        }
    }
};