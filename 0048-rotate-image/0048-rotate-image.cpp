class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // size of rows and colums are same 
        int n = matrix.size();

        // step 1: transpose of a matrix
        //  col = row + 1 to avoid twice sawp

        for (int row = 0; row < n; row++) {
            for (int col = row + 1; col < n; col++) {
                swap(matrix[row][col], matrix[col][row]);
            }
        }

        // step 2: reverse transpose matrix

        for (int row = 0; row < n; row++) {
             reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};