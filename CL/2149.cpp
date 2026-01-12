class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans;

        int pos = 0;
        int neg = 0;

       
        while(pos<nums.size() && nums[pos] < 0){
            pos++;
        }

        ans.push_back(nums[pos]);
        pos++;


        while(ans.size() < nums.size()){

            if(ans.back() > 0){
                if(nums[neg] < 0){
                    ans.push_back(nums[neg]);
                    neg++;
                }else{
                    neg++;
                }
            }else{
                if(nums[pos] > 0){
                    ans.push_back(nums[pos]);
                    pos++;
                }else{
                    pos++;
                }

            }
        }

        return ans;
    }
};