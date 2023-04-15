#include "header.h"

void PrepareTestData(vector<TD_VVC_I>& testData)
{
    TD_VVC_I data = {};

    data.input = {
    {'X', '.', 'X'},
    {'.', '.', 'X'},
    {'.', '.', 'X'} };
    data.output = 2;
    testData.push_back(data);

    data.input = {
        {'X', '.', '.', 'X'},
        {'.', '.', '.', 'X'},
        {'.', '.', '.', 'X'}};
    data.output = 2;
    testData.push_back(data);

    data.input = {
        {'.', 'X', '.', 'X'},
        {'.', 'X', '.', 'X'},
        {'.', '.', '.', 'X'},
        {'X', 'X', 'X', '.'} };
    data.output = 3;
    testData.push_back(data);

    data.input = {{'.'}};
    data.output = 0;
    testData.push_back(data);

}
