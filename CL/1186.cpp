class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int noDel = arr[0];
        int oneDel = INT_MIN;
        int ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            int prevNoDel = noDel;

            noDel = max(arr[i], noDel + arr[i]);

            if (oneDel == INT_MIN)
                oneDel = prevNoDel;
            else
                oneDel = max(prevNoDel, oneDel + arr[i]);

            ans = max(ans, max(noDel, oneDel));
        }

        return ans;
    }
};