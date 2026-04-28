class Solution {

    int maxFreq(vector<int> freq) {
        int max = 0;
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] > max) {
                max = freq[i];
            }
        }
        return max;
    }

public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int n = s.size();
        int res = INT_MIN;
        vector<int> freq(256,0);

        for(high = 0; high < n; high++) {
            freq[s[high]]++;
            int len = high - low + 1;
            int maxCount = maxFreq(freq);
            int diff = len - maxCount;

            while(diff > k) {
                freq[s[low]]--;
                low++;
                // freq.erase(s[low-1])
                maxCount = maxFreq(freq);
                len = high - low + 1;
                diff = len - maxCount;
            }

            len = high - low + 1;
            res = max(res, len);

            // if(maxCount <= k){

            // }            

        }
        return res;
    }
};