class Solution {
public:
    int majorityElement(vector<int>& nums) {


        unordered_map<int,int> freq;


        for(int x : nums){
            freq[x]++;
            if(freq[x] > nums.size()/2){
                return x;
            
            }

        }
        return -1;

        // for(int i = 0;i<nums.size();i++){
        //     ansFreq[nums[i]]++;
        // }
        // int maxi = INT_MIN;
        // for(int i = 0;i<nums.size();i++){
        //     maxi = max(ansFreq[i],maxi);
        // }
        // return max;

    }
};