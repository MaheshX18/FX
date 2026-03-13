// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
        
//         int n = matrix.size();

//         //we rotate layer by layer(outer -> inner)
//         for(int layer = 0; layer < n/2; layer++){
//             int first =layer;
//             int last = n - 1 - layer;

//             //for each element in the layer

//             for(int i = first; i < last; i++){
//                 int offset = i - first;
//                 // ---- my PAPER LOGIC ----
//                 // 1st row -> right col
//                 // right col -> last row
//                 // last row -> left col
//                 // left col -> 1st row

//                 // save top (1st row)
//                 int top = matrix[first][i];

//                 //left col -> top
//                 matrix[first][i] = matrix[last - offset][first];

//                 // bottom row -> left col
//                 matrix[last - offset][first] = matrix[last][last - offset];

//                 // right col -> bottom row
//                 matrix[last][last - offset] = matrix[i][last];

//                 //top(saved) -> right col
//                 matrix[i][last] = top;
//             }
//         }
//     }
// };


//another method
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        vector<vector<int>> matrix2(n, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix2[j][n - 1 - i] = matrix[i][j];
            }
        }

        matrix = matrix2;
        

        

    }
};
// //another method
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();

//         // Step 1: Transpose the matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }

//         // Step 2: Reverse each row
//         for (int i = 0; i < n; i++) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };
