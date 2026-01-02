class Solution {
public:
    void moveZeroes(vector<int>& nums){ 


// APPROACH-->> 1
            //     vector<int> nums1;
            //     int count=0;
            //     for(int i =0;i<nums.size();i++){
            //         if(nums[i]!=0){
            //             nums1.push_back(nums[i]);
            //         }else{
            //             count+=1;
            //         }
            //     }
            //     for(int i=0;i<nums.size();i++){
            //         nums1.push_back(0);
            //     }
            //     // cout<<count<<" "<<endl;

            //     for(int i=0;i<nums.size();i++){
            //         nums[i] =nums1[i];
            //     }

            //     for(int i =0;i<nums.size();i++){
            //         cout<<nums[i]<<" ";
            //     }

            // }


// APPROACH-->> 2

            // int j=0;
            // for(int i=0;i<nums.size();i++){
            //     if(nums[i]!=0){
            //         nums[j]=nums[i];
            //         j++;
            //     }
            // }
            // for(int i=j;i<nums.size();i++){
            //     nums[i]=0;
            // }

            // for(int i=0;i<nums.size();i++){
            //     cout<<nums[i]<<" ";
            // }

//APPROACH-->> 3

            int j=0;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]!=0){
                        swap(nums[i],nums[j]);
                        j++;
                    }
                }
        

                }
            };