#include "header.h"

string removeKdigits(string num, int k) {
    int remove = k;
    vector<char> keep;
    keep.push_back(num[0]);
    for (size_t i = 1; i < num.length(); i++) {
        // if the last kept char is large than the current one, remove
        // the last kept char.
        while (remove > 0 && keep.size() > 0 && keep[keep.size() - 1] > num[i]) {
            keep.pop_back();
            --remove;
        }
        keep.push_back(num[i]);
    }
    // Only need n - k digits.
    keep.resize(num.length() - k);

    // Get rid of the leading '0'.
    int start = 0;
    while (start < keep.size()) {
        if (keep[start] != '0') {
            break;
        }
        ++start;
    }
    string s;
    if (start < keep.size()) {
        s = string(keep.begin() + start, keep.end());
    }
    else {
        s = "0";
    }
    return s;
}