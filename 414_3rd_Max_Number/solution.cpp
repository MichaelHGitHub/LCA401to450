#include "header.h"

int thirdMax(vector<int>& nums) {

    long long n1 = (long long)INT32_MIN - 1, n2 = (long long)INT32_MIN - 1, n3 = (long long)INT32_MIN - 1;
    for (int i = 0; i < nums.size(); i++) {
        if (n1 < nums[i]) {
            n3 = n2;
            n2 = n1;
            n1 = nums[i];
        }
        else if (n1 != nums[i] && n2 < nums[i]) {
            n3 = n2;
            n2 = nums[i];
        }
        else if (n1 != nums[i] && n2 != nums[i] && n3 < nums[i]) {
            n3 = nums[i];
        }
    }
    return n3 == (long long)INT32_MIN - 1? n1 : n3;
}