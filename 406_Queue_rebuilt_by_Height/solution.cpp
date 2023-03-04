#include "header.h"
#include <algorithm>

// sort the array by height, from high to low
// insert each people into a new array at the k place
// Key: insert from highest to lowest ensures k is the
// right place for the current person to go in because all
// the people in the queue at the moment are taller than
// or equal to the current person.
vector<vector<int>> reconstructQueue(
    vector<vector<int>>& people) {

    std::sort(people.begin(), people.end(),
        [](vector<int> p1, vector<int> p2) {
            return (p1[0] > p2[0] ||
            (p1[0] == p2[0] && p1[1] < p2[1]));
        });

    vector<vector<int>> res;
    for (vector<int> p : people) {
        res.insert(res.begin() + p[1], p);
    }
    return res;
}