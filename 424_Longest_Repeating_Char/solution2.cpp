#include "header.h"

// length of the current slide window = end - start + 1;
// Number of letters need to be modified in the current slide window = end + start + 1 - max_count
int characterReplacement2(string s, int k) {
    int max_len = 0;

    // Beginning of the slide window.
    int start = 0;
    // End of the slide window
    int end = 0;
    // Record number of letters in the slide window
    int letters[26] = { 0 };
    // max number of same letters in the slide window
    int max_count = 0;

    // expand window
    while (end < s.length()) {
        max_count = max(max_count, ++letters[s[end] - 'A']);

        // number of letters need to be modified exceeds k, move beginning right.
        while (end - start + 1 - max_count > k) {
            --letters[s[start] - 'A'];
            max_count = max(max_count, letters[s[start] - 'A']);
            ++start;
        }

        max_len = max(max_len, end - start + 1);
        ++end;
    }

    return max_len;
}