#include "header.h"

void PrepareTestData(vector<TD_I_VS>& testData)
{
    TD_I_VS data = {};

    data.input = 3;
    data.output = { "1","2","Fizz" };
    testData.push_back(data);

    data.input = 5;
    data.output = { "1","2","Fizz","4","Buzz" };
    testData.push_back(data);

    data.input = 15;
    data.output = { "1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz" };
    testData.push_back(data);
}
