class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Loop over nums2 and place its elements into the extra space in nums1
        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i]; // Add nums2 elements to the end of nums1
        }
        // Sort nums1 after adding all elements from nums2
        sort(nums1.begin(), nums1.end()); // Sort nums1 to get the final result
    }
};
