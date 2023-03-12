#include "header.h"

// First find the number of each longest phase of arithmetic slice in the given array.
// For each phase of arithmetic slice(with n elements):
// starts from first element, it can form (n-3 + 1) sub-arrays
// starts from the second element, it can form ((n-1) - 3 + 1) sub-arrays
// it repeats until n=3, it forms 3 - 3 + 1 = 1 sub-array
// Thus, the total number of the sub-arrays is:
// (n-3 + 1) + ((n-1) -3 + 1) + ((n-2) -3 + 1) + ... + (3 - 3 + 1)
// = (1 + 2 + 3 + ... + n) - 1 -2 - 2(n-2)
// = n(n+1)/2 - 2n + 1;
int numberOfArithmeticSlices(vector<int>& nums) {
    int result = 0;
    if (nums.size() > 2) {
        vector<int> phase_num;
        int begin = 0, end = 1;
        int diff = nums[end] - nums[begin];
        ++end;
        while (end < nums.size()) {
            if (nums[end] - nums[end - 1] == diff) {
                ++end;
            }
            else {
                if (end - begin > 2) {
                    phase_num.push_back(end - begin);
                }
                // Restart from the element before current end
                begin = end - 1;
                diff = nums[end] - nums[begin];
                ++end;
            }
        }
        // Add last phase
        if (end - begin > 2) {
            phase_num.push_back(end - begin);
        }
        // Calculate the total number of sub-arrays
        for (int i = 0; i < phase_num.size(); i++) {
            result += (phase_num[i] * (phase_num[i] + 1) / 2) - 2 * phase_num[i] + 1;
        }
    }
    return result;
}