#include "header.h"

string originalDigits(string s) {
    int count[26] = {0};
    int results[10] = {0};
    vector<string> words({ "zero","one","two","three","four","five","six","seven","eight","nine" });

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }

    // count: 0-z, 2-w, 4-u, 6-x, 8-g
    results[0] = count['z' - 'a'];
    results[2] = count['w' - 'a'];
    results[4] = count['u' - 'a'];
    results[6] = count['x' - 'a'];
    results[8] = count['g' - 'a'];

    // Remove counts of 0-z, 2-w, 4-u, 6-x, 8-g
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < words[i].length(); j++) {
            count[words[i][j] - 'a'] -= results[i];
        }
    }

    // Now another set of numbers are unique too.
    // count:1-o, 3-r, 5-f, 7-s
    results[1] = count['o' - 'a'];
    results[3] = count['r' - 'a'];
    results[5] = count['f' - 'a'];
    results[7] = count['s' - 'a'];

    // Remove counts of 1-o, 3-r, 5-f, 7-s
    vector<int> sub_set({ 1,2,5,7 });
    for (int i = 0; i < sub_set.size(); i++) {
        for (int j = 0; j < words[sub_set[i]].length(); j++) {
            count[words[sub_set[i]][j] - 'a'] -= results[sub_set[i]];
        }
    }

    // count: nine
    results[9] = count['i' - 'a'];
    string res;
    for (int i = 0; i < 10; i++) {
        if (results[i] > 0) {
            res.append(results[i], i + '0');
        }
    }

    return res;
}