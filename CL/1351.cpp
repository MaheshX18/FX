class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
//************** Brute Force ***************
        // int count =0;
        // for(int row =0; row<grid.size();row++){
        //     for(int col =0;col<grid[row].size();col++){
        //         if(grid[row][col] < 0){
        //             count++;
        //         }
        //     }
        // }
        // return count;

// **************** Optimize Sol ******************

    int m = grid.size();
    int n = grid[0].size();

    int count = 0;
    // int x = 1;
    int r = 0;
    int c = n-1;
    while(r < m && c >=0){

        if(grid[r][c] < 0){
            count += (m-r);
            c--;
        }else{
            r++;
            }
        }
        // x++;
    return count;

    }
};