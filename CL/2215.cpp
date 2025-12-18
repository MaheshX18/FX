class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        



        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        vector<int> onlyInNums1;
        vector<int> onlyInNums2;

        for(int x : set1){
            if(set2.find(x) == set2.end()){
                onlyInNums1.push_back(x);
            }
        }

        for(int x : set2){
            if(set1.find(x) == set1.end()){
                onlyInNums2.push_back(x);
            }
        }

        return {onlyInNums1,onlyInNums2};
//         // sort(nums1.begin(),nums1.end());
//         // sort(nums2.begin(),nums2.end());

//         // vector<int> ans;

//         // for(int i =0;i<nums1.size();i++){
//         //     bool match = false;
//         //     for(int j =0;j<nums2.size();j++){
//         //         if(nums1[i] == nums2[j]){
//         //             match = true;
//         //             break;
//         //         }
//         //     }if(match == false){
//         //             ans.push_back(nums1[i]);
//         //         }
//         // }

//         // for(int j =0;j<nums2.size();j++){
//         //     bool match = false;
//         //     for(int i =0;i<nums1.size();i++){
//         //         if(nums2[j] == nums1[i]){
//         //             match = true;
//         //             break;
//         //         }
//         //     }if(match == false){
//         //             ans.push_back(nums2[j]);
//         //         }
//         // }
        

//         // int start1 =0
//         // int end1 = nums1.size()-1;
//         // if(nums1.size() > nums2.size()){
//         //     while()
//         // }

//         // return ans;
    }
};


// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         int i=0;
//         vector<vector<int>> res;
//         vector<int> a, b;
//         vector<bool> nums1B(2001, 0), nums2B(2001, 0);
//         while(i< nums1.size()){
//             nums1B[nums1[i]+1000] = true;
//             i++;
//         }
//         i=0;
//         while(i< nums2.size()){
//             nums2B[nums2[i]+1000] = true;
//             i++;
//         }
//         for(int i=0; i<nums1.size(); i++){
//             if(nums2B[nums1[i]+1000])continue;
//             else {
//                 a.push_back(nums1[i]);
//                 nums2B[nums1[i]+1000] = true;
//             }
//         }
//         for(int i=0; i<nums2.size(); i++){
//             if(nums1B[nums2[i]+1000])continue;
//             else {
//                 b.push_back(nums2[i]);
//                 nums1B[nums2[i]+1000] = true;
//             }
//         }
//         res.push_back(a);
//         res.push_back(b);
//         return res;

//     }
// };
// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         set<int> s1,s2;
//         vector<vector<int>> ans(2);
//         for(auto i : nums1){
//             s1.insert(i);
//         }
//         for(auto i : nums2){
//             s2.insert(i);
//         }
//         for(auto i : s1){
//             if(s2.find(i) == s2.end()){
//                 ans[0].push_back(i);
//             }
//         }
//         for(auto i : s2){
//             if(s1.find(i) == s1.end()){
//                 ans[1].push_back(i);
//             }
//         }
//         return ans;
//     }
// };