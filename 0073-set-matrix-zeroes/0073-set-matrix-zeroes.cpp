class Solution {
public:
    void setRow(vector<vector<int>>& matrix, int row, int colSize) {
        for (int col = 0; col < colSize; col++) {
            matrix[row][col] = 0;
        }
    }

    void setCol(vector<vector<int>>& matrix, int col, int rowSize) {
        for (int row = 0; row < rowSize; row++) {
            matrix[row][col] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {

        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        vector<int> rows(rowSize, 0);
        vector<int> cols(colSize, 0);

        for (int row = 0; row < rowSize; row++) {
            for (int col = 0; col < colSize; col++) {
                if (matrix[row][col] == 0) {
                    rows[row] = -1;
                    cols[col] = -1;
                }
            }
        }

        for (int row = 0; row < rowSize; row++) {
            if (rows[row] == -1)
                setRow(matrix, row, colSize);
        }

        for (int col = 0; col < colSize; col++) {
            if (cols[col] == -1)
                setCol(matrix, col, rowSize);
        }
    }
};