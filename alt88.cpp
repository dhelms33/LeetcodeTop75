class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // Pointer for the last valid element in nums1
        int p2 = n - 1; // Pointer for the last element in nums2
        int p = m + n - 1; // Pointer for the last position in nums1 (to be filled)
        
        // While there are elements to compare in both nums1 and nums2
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                // If the current element in nums1 is larger, place it at the end
                nums1[p] = nums1[p1];
                p1--; // Move the pointer in nums1 to the left
            } else {
                // If the current element in nums2 is larger or equal, place it at the end
                nums1[p] = nums2[p2];
                p2--; // Move the pointer in nums2 to the left
            }
            p--; // Move the pointer for the merged array to the left
        }
        
        // If there are remaining elements in nums2, copy them over
        // No need to do this for nums1 because they are already in place
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};
