#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data = {};

    data.input = { 3,10,5,25,2,8 };
    data.output = 28;
    testData.push_back(data);

    data.input = { 14,70,53,83,49,91,36,80,92,51,66,70 };
    data.output = 127;
    testData.push_back(data);

}
