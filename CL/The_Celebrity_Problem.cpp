class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        // brute force
                
                // int knowMeArr[n];
                // int iKnowArr[n];
                // for(int i = 0; i < n; i++){
                //     knowMeArr[i] = 0;
                //     iKnowArr[i] = 0;
                // }
                
                // for(int i = 0; i < n; i++){
                //     for(int j = 0; j < n; j++){
                //         if(i != j && mat[i][j] == 1){
                //             knowMeArr[j]++;
                //             iKnowArr[i]++;
                //         }
                //     }
                // }
                
                // for(int i = 0; i < n; i++){
                //     if(knowMeArr[i] == n-1 && iKnowArr[i] == 0){
                //         return i;
                //     }
                // }
                
                // return -1;
        
        int start = 0;
        int end = n - 1;
        
        
        while(start < end){
            if(mat[start][end] == 1)
            {
                start++;
            }
            else if(mat[end][start] == 1)
            {
                end--;
            }
            else
            {
                start++;
                end--;
            }
        }
        
        if(start > end)return -1;
        for(int i = 0; i < n; i++){
             if(i == start) continue;
            if(mat[start][i] != 0 || mat[i][start] != 1){
                return -1;
            }
        }
        return start;
        
        
    }
};