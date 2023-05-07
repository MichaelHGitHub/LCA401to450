#include "header.h"

void PrepareTestData(vector<TD_S_S>& testData)
{
    TD_S_S data = {};

    data.input = "xsi";
    data.output = "6";
    testData.push_back(data);

    data.input = "owoztneoer";
    data.output = "012";
    testData.push_back(data);

    data.input = "fviefuro";
    data.output = "45";
    testData.push_back(data);
}
