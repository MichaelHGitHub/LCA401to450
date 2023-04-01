#include "header.h"

void PrepareTestData(vector<TD_S_S_S>& testData)
{
    TD_S_S_S data = {};

    data.input = "11";
    data.input2 = "123";
    data.output = "134";
    testData.push_back(data);

    data.input = "456";
    data.input2 = "77";
    data.output = "533";
    testData.push_back(data);

    data.input = "0";
    data.input2 = "0";
    data.output = "0";
    testData.push_back(data);
}
