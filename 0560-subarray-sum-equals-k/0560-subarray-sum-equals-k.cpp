class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int prefixSum = 0;
        int count = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int required = prefixSum - k;

            if (mp.find(required) != mp.end()) {
                count += mp[required];
            }

            mp[prefixSum]++;
        }

        return count;
    }

};