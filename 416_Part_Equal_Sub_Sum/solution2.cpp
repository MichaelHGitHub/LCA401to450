#include "header.h"
#include <map>

bool canPartition2(vector<int>& nums) {

    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    bool result = false;
    if (sum % 2 == 0) {
        int half = sum / 2;
        vector<bool> dp(half + 1, false);
        dp[0] = true;
        for (int i = 0; i < nums.size(); i++) {
            // must loop from right to left otherwise would use nums[i] multiple times.
            // but why?
            for (int j = half; j >= nums[i]; j--) {
                if (dp[j - nums[i]]) {
                    dp[j] = true;
                }
            }
        }
        result = dp[half];
    }
    return result;
}