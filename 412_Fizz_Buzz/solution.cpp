#include "header.h"

vector<string> fizzBuzz(int n) {
    vector<string> result(n);

    for (int i = 1; i <= n; i++) {
        result[i - 1] = to_string(i);
    }

    for (int i = 2; i < n; i += 3) {
        result[i] = "Fizz";
    }

    for (int i = 4; i < n; i += 5) {
        result[i] = "Buzz";
    }

    for (int i = 14; i < n; i += 15) {
        result[i] = "FizzBuzz";
    }
    return result;
}