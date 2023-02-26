#include "header.h"

// Just do it in the way how you convert a binary number to its hex form,
// which is converting last 4 bits at a time.
string toHex(int num) {
    string res;
    if (num == 0) {
        res = "0";
    }
    else {
        // cast int to unsigned int otherwise the number will
        // stay negative forever.
        unsigned int remaindre = num;
        while (remaindre != 0) {
            int last4b = remaindre & 15;
            res.push_back(last4b > 9 ? last4b - 10 + 'a' : last4b + '0');
            remaindre >>= 4;
        }
        std::reverse(res.begin(), res.end());
    }
    return res;
}