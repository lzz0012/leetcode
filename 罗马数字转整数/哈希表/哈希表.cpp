/*
* 从右往左遍历罗马数字字符串
* 1. 如果当前字符对应的整数小于前一个字符对应的整数，则减去当前字符对应的整数
* 2. 否则加上当前字符对应的整数
*/

#include <string>
#include <unordered_map>
#include <iostream>

using std::string;

int romanToInt(string s)
{
    std::unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int sum = 0;
    for(int i = s.size() - 1; i >= 0; --i)
    {
        int currentValue = romanMap[s[i]];
        if(i < s.size() - 1 && currentValue < romanMap[s[i + 1]])
            sum -= currentValue;
        else
            sum += currentValue;
    }
    return sum;
}
