#include "header.h"

string addStrings(string num1, string num2) {
    string result;
    bool carry_over = false;
    int len1 = num1.length() - 1;
    int len2 = num2.length() - 1;

    while( len1 >= 0 || len2 >= 0) {
        int sum = 0;
        if (len1 >= 0) {
            sum += num1[len1] - '0';
            --len1;
        }
        if (len2 >= 0) {
            sum += num2[len2] - '0';
            --len2;
        }
        if (carry_over) {
            ++sum;
        }
        carry_over = (sum > 9) ? true : false;
        result.push_back(sum % 10 + '0');
    }
    if (carry_over) {
        result.push_back('1');
    }
    return string(result.rbegin(), result.rend());
}