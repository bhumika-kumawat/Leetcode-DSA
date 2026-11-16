
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if (matrix.empty() || matrix[0].empty()) {
            return {};
        }

        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        vector<int> ans;

        int startingRow = 0;
        int endingRow = rowSize - 1;

        int startingCol = 0;
        int endingCol = colSize - 1;

        while (startingRow <= endingRow &&
               startingCol <= endingCol) {

            // 1. TOP: Left to right
            for (int i = startingCol; i <= endingCol; i++) {
                ans.push_back(matrix[startingRow][i]);
            }
            startingRow++;

            // 2. RIGHT: Top to bottom
            for (int i = startingRow; i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
            }
            endingCol--;

            // 3. BOTTOM: Right to left
            if (startingRow <= endingRow) {
                for (int i = endingCol; i >= startingCol; i--) {
                    ans.push_back(matrix[endingRow][i]);
                }
            }
            endingRow--;

            // 4. LEFT: Bottom to top
            if (startingCol <= endingCol) {
                for (int i = endingRow; i >= startingRow; i--) {
                    ans.push_back(matrix[i][startingCol]);
                }
            }
            startingCol++;
        }

        return ans;
    }
};
