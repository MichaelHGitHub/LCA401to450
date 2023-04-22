#include "header.h"
#include <unordered_set>

int findMaximumXOR(vector<int>& nums) {

    int max = 0;
    int mask = 0;

    // Check bit by bit from left to right
    for (int i = 31; i >= 0; i--) {
        mask |= 1 << i;
        unordered_set<int> left_parts;

        // First get the left bits
        for (int n : nums) {
            left_parts.insert(mask & n);
        }

        // Guess the next max number based on the current max
        int guess_max = max | (1 << i);

        // Giving the first number is each of the number in left_parts
        // test if the another number exists
        for (int left_num : left_parts) {
            // If left_num ^ another_num = guess_max
            // another_num = guess_max ^ left_num;
            int another_num = guess_max ^ left_num;
            if (left_parts.find(another_num) != left_parts.end()) {
                max = guess_max;
                break;
            }
        }
    }
    return max;
}