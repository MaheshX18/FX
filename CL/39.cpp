class Solution {
public:

    void formPairs(vector<int>& candidates, int n, int sum, int idx, vector<int> &diary, vector<vector<int>> &res, int target)
    {

        //base case 
        if(n == idx)
        {
            if(sum == target)
            {
                res.push_back(diary);
                
            }
            return;
        }
        
        formPairs(candidates, n, sum, idx + 1, diary, res, target);

        if(sum + candidates[idx] <= target)
        {
            diary.push_back(candidates[idx]);
            sum += candidates[idx];
            formPairs(candidates, n, sum, idx, diary, res, target);

            diary.pop_back();
            sum -= candidates[idx];
        }

        return;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        int sum = 0;
        int idx = 0;
        vector<int> diary;
        vector<vector<int>> res;

        formPairs(candidates, n, sum, idx, diary, res,target);

        return res;
    }
};
