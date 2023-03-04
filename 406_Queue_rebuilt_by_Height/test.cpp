#include "header.h"

void PrepareTestData(vector<TD_VVI_VVI>& testData)
{
    TD_VVI_VVI data = {};

    data.input = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    data.output = {{5, 0}, {7, 0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};
    testData.push_back(data);

    data.input = {{6, 0}, {5, 0}, {4, 0}, {3, 2}, {2, 2}, {1, 4}};
    data.output = {{4, 0}, {5, 0}, {2, 2}, {3, 2}, {1, 4}, {6, 0}};
    testData.push_back(data);
}
