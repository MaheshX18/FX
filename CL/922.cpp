class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }

        int eFront = 0;
        int oFront = 0;

        int i = 0;
        while(eFront < nums.size()/2 || oFront < nums.size()/2){
            if(i % 2 ==0){
                ans.push_back(even[eFront]);
                eFront++;
            }else{
                ans.push_back(odd[oFront]);
                oFront++;
            }
            i++;
        }

        return ans;
    }
};