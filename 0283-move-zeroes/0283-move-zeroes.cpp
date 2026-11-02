class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // size of an array
        int n = nums.size();

        // i points to the position where the next non-zero element should be
        // placed
        int i = 0;

        // j traverses the array to find non-zero elements

        for (int j = i + 1; j < n; j++) {
            if (nums[i] != 0) {
                i++;
            }

            else if (nums[i] == 0 && nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};