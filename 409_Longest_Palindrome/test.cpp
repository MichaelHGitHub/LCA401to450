#include "header.h"

void PrepareTestData(vector<TD_S_I>& testData)
{
    TD_S_I data = {};

    data.input = "zeusnilemacaronimaisanitratetartinasiaminoracamelinsuez";
    data.output = 55;
    testData.push_back(data);

    data.input = "abccccdd";
    data.output = 7;
    testData.push_back(data);

    data.input = "a";
    data.output = 1;
    testData.push_back(data);
}
