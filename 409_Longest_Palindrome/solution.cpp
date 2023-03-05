#include "header.h"

int longestPalindrome(string s) {

    // There are 6 other symbols between Z and a
    vector<int> occurrence(52 + 6, 0);
    for (int i = 0; i < s.length(); i++) {
        occurrence[s[i] - 'A']++;
    }

    int res = 0;
    bool more = false;
    for (int n : occurrence) {
        res += n / 2;
        more = more ? more : (n % 2 == 1);
    }

    return more ? 2 * res + 1 : 2 * res;
}