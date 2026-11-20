class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                ans.push_back(nums[i]);
            }
        }

        ans.push_back(nums[n - 1]);

        int j = 0;
        for (; j < ans.size(); j++) {
            nums[j] = ans[j];
        }

        return j;
    }
};