class Solution {
public:
    void rotate(vector<int>& nums, int k) {

//APPRoach--->  1  
        // std::rotate(nums.begin(), nums.end() - k, nums.end());

//APPROACH --->> 2

        
    //     int n = nums.size();
        
    //     if(n==0) return;

    //     k = k%n;
    //     if(k==0) return;

    //    int m =n-k;
    //     vector <int> speed(n);
        
        
    //      for(int i=0;i<nums.size();i++){
    //         speed[i] =  nums[m];
    //         m =(m+1)%n;
    //      }

    //      nums =speed;

//APPROACH --->>>  3

        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums =temp;
    }
};