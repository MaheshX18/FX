class Solution {
public:
    int search(vector<int>& nums, int target) {

    //Brute Force 
                // int i = 0;
                // if(nums.size() == 0){
                //     return -1;
                // }

                // if(nums.size() == 1 && nums[0] != target){
                //     return -1;
                // }
                // // bool verify  = false;
                // while(i < nums.size()){
                //     if(nums[i] == target){
                //         // verify = true;
                //         return i;
                //     }
                //     i++;
                // }
                
                // return -1;

     ///////OPTIMAL SOLUTION 
                
                int start = 0;
                int end = nums.size()-1;

                

                if(nums.size() == 0){
                    return -1;
                }
                if(nums.size() == 1 && nums[0] != target){
                    return -1;
                }

                while(start <= end){
                    int mid = start + (end - start) / 2;

                    if(nums[mid] == target){
                        return mid;
                    } 


                    if(nums[start] <= nums[mid]){
                        if(target >= nums[start] && target < nums[mid]){
                            end = mid - 1;
                        }else{
                            start = mid + 1;
                        }
                    }
                    else {
                        if(target > nums[mid] && target <= nums[end]){
                            start = mid+1;
                        }else{
                            end = mid-1;
                        }
                    }
                }
                return -1;
    }
};