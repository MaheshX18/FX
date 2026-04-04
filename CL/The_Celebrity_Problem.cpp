class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        int knowMeArr[n];
        int iKnowArr[n];
        for(int i = 0; i < n; i++){
            knowMeArr[i] = 0;
            iKnowArr[i] = 0;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && mat[i][j] == 1){
                    knowMeArr[j]++;
                    iKnowArr[i]++;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(knowMeArr[i] == n-1 && iKnowArr[i] == 0){
                return i;
            }
        }
        
        return -1;
        
        
        
    }
};