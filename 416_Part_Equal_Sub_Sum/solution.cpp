#include "header.h"
#include <map>

bool canOrNot(map<pair<int, int>, bool>& record, vector<int>& nums, int start, int sum);

bool canPartition(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    bool result = false;
    map<pair<int, int>, bool> record;
    if (sum % 2 == 0) {
        int half = sum / 2;
        for (int i = 0; i < nums.size(); i++) {
            if (canOrNot(record, nums, i, half)) {
                result = true;
                break;
            }
        }
    }
    return result;
}

bool canOrNot(map<pair<int, int>, bool>& record, vector<int>& nums, int start, int sum) {
    bool result = false;

    if (start < nums.size() && sum > 0) {
        if (sum == nums[start]) {
            result = true;
        }
        else {
            for (int i = start + 1; i < nums.size(); i++) {
                if (record.find(pair<int, int>(i, sum - nums[start])) != record.end()) {
                    result = record[pair<int, int>(i, sum - nums[start])];
                    break;
                }
                else if (canOrNot(record, nums, i, sum - nums[start])) {
                    result = true;
                    break;
                }
            }
        }
    }
    record[pair<int, int>(start, sum)] = result;
    return result;
}