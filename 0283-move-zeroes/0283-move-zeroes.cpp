class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // size of an array

        int n = nums.size();


        // I stores all non zeroes
        int i=0;

        // J  finds non zeroes and swap with I 
        for(int j =0; j<n; j++)
        {
            if(nums[j] != 0)
            {
                swap (nums[i] , nums[j]);
                i++;
            }
        }
    }
};