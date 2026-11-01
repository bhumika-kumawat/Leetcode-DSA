class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // size of an array
        int n = nums.size();

        // variable to count total no of ones
        int countOnes = 0;

        // maximum ones store
        int maxOnes = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                countOnes++;
                maxOnes = max(countOnes, maxOnes);
            }
            
            else {
                countOnes = 0;
            }
        }

        return maxOnes;
    }
};