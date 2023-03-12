#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data = {};

    data.input = { 1, 2, 3, 4, 5, 6 };
    data.output = 10;
    testData.push_back(data);

    data.input = { 1,2,3 };
    data.output = 1;
    testData.push_back(data);

    data.input = { -1, 1,2,3,4 };
    data.output = 3;
    testData.push_back(data);

    data.input = { 1,2,3,4 };
    data.output = 3;
    testData.push_back(data);
    
    data.input = { 1,3,5,7,9 };
    data.output = 6;
    testData.push_back(data);

    data.input = { 7,7,7,7 };
    data.output = 3;
    testData.push_back(data);

    data.input = { 3,-1,-5,-9 };
    data.output = 3;
    testData.push_back(data);

    data.input = { 3,-1,-5,-9, 1, 3,-1,-5,-9 };
    data.output = 6;
    testData.push_back(data);

    data.input = { 1 };
    data.output = 0;
    testData.push_back(data);
}
