#include "header.h"

int characterReplacement(string s, int k) {
    int max_len = 0;

    int start = 0;
    while (start < s.length()) {
        int len = 0;
        int end = start + 1;
        int rep = k;
        while (end < s.length()) {
            if (s[end] == s[start]) {
                ++end;
            }
            else if (rep > 0) {
                --rep;
                ++end;
            }
            else {
                break;
            }
        }
        len = end - start;
        if (rep > 0 && start > 0) {
            len += min(rep, start);
        }
        max_len = max(max_len, len);
        ++start;
    }

    start = s.length() - 1;
    while (start >= 0) {
        int len = 0;
        int end = start - 1;
        int rep = k;
        while (end >= 0) {
            if (s[end] == s[start]) {
                --end;
            }
            else if (rep > 0) {
                --rep;
                --end;
            }
            else {
                break;
            }
        }
        len = start - end;
        if (rep > 0 && start < s.length() - 1) {
            len += min(rep, (int)s.length() - 1 - start);
        }
        max_len = max(max_len, len);
        --start;
    }

    return max_len;
}