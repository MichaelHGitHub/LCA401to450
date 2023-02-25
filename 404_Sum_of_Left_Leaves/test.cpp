#include "header.h"

void PrepareTestData(vector<TD_T_I>& testData)
{
    TD_T_I data = {};

    data.input = GenerateTree({ 3, 9, 20, NULL_NODE_VALUE,NULL_NODE_VALUE, 15, 7 });
    data.output = 24;
    testData.push_back(data);

    data.input = GenerateTree({ 1 });
    data.output = 0;
    testData.push_back(data);
}
