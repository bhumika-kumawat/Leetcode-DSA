class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int>positive;
        vector<int>negative;

        for(int i = 0; i<n; i++)
        {
            if(nums[i] > 0)
            {
                positive.push_back(nums[i]);

            }

            else 
            {
                negative.push_back(nums[i]);
            }
        } 

        int index = 0;
        for(int i= 0; i<n/2; i++)
        {
            nums[index] = positive[i];
            index++;

            nums[index] = negative[i];
            index++;
        }

        return nums;
        
    }
};