class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        int longest = 1;

        sort(nums.begin(), nums.end());

        if (nums.empty()) {
            return 0;
        }

        int count = 1;

        for (int i = 1; i < n; i++) {

            // handle duplicate case here
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            // if not duplicate
            else if (nums[i] == nums[i - 1] + 1) {
                count++;
            }

            else {
                count = 1;
            }

            longest = max(longest, count);
        }
        return longest;
    }
};