class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int n = image.size();

        // step 1: reverse each row

        for (int row = 0; row < n; row++) {
            reverse(image[row].begin(), image[row].end());
        }

        // step 2 : invert the image

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (image[row][col] == 0) {
                    image[row][col] = 1;

                }

                else {
                    image[row][col] = 0;
                }
            }
        }

        return image;
    }
};