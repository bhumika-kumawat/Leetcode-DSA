class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialize pointers at the last valid elements
        int i = m - 1;
        int j = n - 1;

        // Index points to the last position of nums1
        int index = m + n - 1;

        // Compare elements from the end and place the larger element
        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[index] = nums1[i];
                i--;
            } else {
                nums1[index] = nums2[j];
                j--;
            }
            index--;
        }
        // Copy remaining elements from nums2, if any
        while (j >= 0) {
            nums1[index] = nums2[j];
            j--;
            index--;
        }
    }
};
