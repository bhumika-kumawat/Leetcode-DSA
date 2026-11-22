class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> prefixCount;

        prefixCount[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int value : nums) {

            prefixSum += value;

            int neededSum = prefixSum - k;

            if (prefixCount.find(neededSum) != prefixCount.end()) {
                count += prefixCount[neededSum];
            }

            prefixCount[prefixSum]++;
        }

        return count;
    }
};
