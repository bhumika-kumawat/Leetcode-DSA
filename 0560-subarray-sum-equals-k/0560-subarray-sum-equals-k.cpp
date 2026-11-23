class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        int sum = 0;
        int count = 0;

        // Handle subarrays starting from index 0
        mp[0] = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            // Calculate current prefix sum
            sum += nums[i];

            // Find required previous prefix sum
            int required = sum - k;

            // Check if required prefix exists
            if(mp.find(required) != mp.end())
            {
                count += mp[required];
            }

            // Store current prefix sum frequency
            mp[sum]++;
        }

        return count;
    }
};