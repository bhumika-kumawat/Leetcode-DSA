
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for(int row = 0; row < n; row++) {

            for(int col = 0; col < n; col++) {

                // Primary diagonal
                if(row == col) {
                    sum += mat[row][col];
                }

                // Secondary diagonal
                else if(row + col == n - 1) {
                    sum += mat[row][col];
                }
            }
        }

        return sum;
    }
};
