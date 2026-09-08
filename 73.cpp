class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        // vector<vector<int>> zeroPositions;
        
        int row = matrix.size();
        int col = matrix[0].size();



        vector<int> zeroRow(row,0);
        vector<int> zeroCol(col,0);

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    zeroRow[i] = 1;
                    zeroCol[j] = 1;
                }
            }
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(zeroRow[i] == 1 || zeroCol[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        // for(int i = 0; i < row; i++)
        // {
        //     for(int j = 0; j < col; j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             int r = i;
        //            while(r >= 0)
        //            {
        //             matrix[r][j] = 0;
        //             r--;
        //            }
                   
        //            r = i;

        //            while(r < row)
        //            {
        //             matrix[r][j] = 0;
        //             r++;
        //            }

        //            int c = j;
        //            while(c > 0)
        //            {
        //             matrix[i][c] = 0;
        //             c--;
        //            }
        //            while(c < col)
        //            {
        //             matrix[i][c] = 0;
        //             c++;
        //            }

        //         }
        //     }
        // }


        // for(int i = 0; i < row; i++)
        // {
        //     for(int j = 0; j < col; i++)
        //     {
        //         if(matrix[row][col] == 0)
        //         {
        //             zeroPositions.push_back({row,col});
        //         }
        //     }
        // }
        



    }
};
