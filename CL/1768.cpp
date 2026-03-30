class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        int start1 = 0;
        int start2 = 0;

        while(start1 < word1.size() && start2 < word2.size()) {
            ans += word1[start1++];
            ans += word2[start2++];
        }

       
        while(start1 < word1.size()) {
            ans += word1[start1++];
        } 

        while(start2 < word2.size()) {
            ans += word2[start2++];
        }

        return ans;
    }
};