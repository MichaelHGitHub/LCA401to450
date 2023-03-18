#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data = {};

    data.input = { INT32_MIN, 1, 2 };
    data.output = INT32_MIN;
    testData.push_back(data);

    data.input = { 1, 2, INT32_MIN };
    data.output = INT32_MIN;
    testData.push_back(data);

    data.input = { 1, 2, 2, 5, 3, 5 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 1,1,2 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 3,2,1 };
    data.output = 1;
    testData.push_back(data);

    data.input = { 1,2 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 2,2,3,1 };
    data.output = 1;
    testData.push_back(data);
}
