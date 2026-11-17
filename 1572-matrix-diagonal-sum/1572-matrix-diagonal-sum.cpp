class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {

            // Primary diagonal
            sum += mat[i][i];

            // Secondary diagonal
            sum += mat[i][n - 1 - i];
        }

        // Avoid counting middle element twice
        if(n % 2 != 0) {
            sum -= mat[n / 2][n / 2];
        }

        return sum;
    }
};
