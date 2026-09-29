class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int res = 0;
        int n = gain.size();
        int altitude = 0;

        for(int i = 0; i < n; i++)
        {
            altitude += gain[i];
            res = max(res, altitude);
        }
        
        return res;
    }
};