
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        vector<int>ans;
        int i;

        for(i = 0; i<n; i++)
        {
            if(nums[i] != 0)
            {
                ans.push_back(nums[i]);
            }
        }

        int j;

        for(j = 0; j < ans.size(); j++)
        {
             nums[j] = ans[j];
        }

        while(j < n)
        {
            nums[j] = 0;
            j++;
        }
    }
};
