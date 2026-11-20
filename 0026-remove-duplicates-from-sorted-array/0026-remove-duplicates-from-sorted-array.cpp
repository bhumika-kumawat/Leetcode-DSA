class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // size of an array
        int n = nums.size();

        int i = 0;

        //  j search non matching element in an array
        for (int j = i + 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }

        //  return no of elements , as index starts from 0 so we add +1.
        return i + 1;
    }
};