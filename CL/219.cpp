class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;

        unordered_map<int,int> freq;

        while(high < nums.size())
        {
            freq[nums[high]]++;
            if(high - low > k)
            {
                freq[nums[low]]--;
                if(freq[nums[low]] == 0)
                {
                    freq.erase(nums[low]);
                }
                low++;
            }
            if(freq.size() < high - low + 1 )
            {
                return true;
            }
            high++;
        }
        return false;
    }
};