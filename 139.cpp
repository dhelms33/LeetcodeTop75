#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for sort

using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Step 1: Convert integers to strings
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        // Step 2: Define a custom comparator that compares two strings by their concatenated value
        // We want to see which concatenation forms a larger number, i.e., "x+y" vs "y+x"
        sort(strNums.begin(), strNums.end(), [](const string &a, const string &b) {
            return a + b > b + a;
        });

        // Step 3: Edge case - If the largest number is "0", the whole number should be "0"
        if (strNums[0] == "0") {
            return "0";
        }

        // Step 4: Build the result by concatenating the sorted numbers
        string result;
        for (string &s : strNums) {
            result += s;
        }

        return result;
    }
};

// Example usage
int main() {
    Solution solution;
    vector<int> nums1 = {10, 2};  // Expected output: "210"
    vector<int> nums2 = {3, 30, 34, 5, 9};  // Expected output: "9534330"

    cout << "Largest Number for {10, 2}: " << solution.largestNumber(nums1) << endl;
    cout << "Largest Number for {3, 30, 34, 5, 9}: " << solution.largestNumber(nums2) << endl;

    return 0;
}
/*initial attempt
class Solution {
public:
    vector<int>& newnums = [];
    string largestNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size; i++) {
            if (nums[i] > nums[i+1]) {
                newnums= sort(nums);
            }
        }
        return newnums;
    }
};
*/