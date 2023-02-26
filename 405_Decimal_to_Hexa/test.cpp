#include "header.h"

void PrepareTestData(vector<TD_I_S>& testData)
{
    TD_I_S data = {};

    data.input = 26;
    data.output = "1a";
    testData.push_back(data);

    data.input = 0;
    data.output = "0";
    testData.push_back(data);

    data.input = -1;
    data.output = "ffffffff";
    testData.push_back(data);
}
