#include "header.h"

void PrepareTestData(vector<TD_S_I_I>& testData)
{
    TD_S_I_I data = {};

    data.input = "BAAAB";
    data.input2 = 2;
    data.output = 5;
    testData.push_back(data);

    data.input = "ABBB";
    data.input2 = 2;
    data.output = 4;
    testData.push_back(data);

    data.input = "ABAB";
    data.input2 = 2;
    data.output = 4;
    testData.push_back(data);

    data.input = "AABABBA";
    data.input2 = 1;
    data.output = 4;
    testData.push_back(data);

}
