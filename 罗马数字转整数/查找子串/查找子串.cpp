/*
* 存在的子串组合为 IV = 4, IX = 9, XL = 40, XC = 90, CD = 400, CM = 900
* 其他的组合都是单个字符的组合
*/

#include <string>
using std::string;

int romanToInt(string s)
{
    int sum = 0;
    std::size_t pos;
    pos= s.find("IV");
    while(pos != string::npos)
    {
        sum += 4;
        s.erase(pos, 2);
        pos = s.find("IV");
    }

    pos= s.find("IX");
    while(pos != string::npos)
    {
        sum += 9;
        s.erase(pos, 2);
        pos = s.find("IX");
    }

    pos= s.find("XL");
    while(pos != string::npos)
    {
        sum += 40;
        s.erase(pos, 2);
        pos = s.find("XL");
    }

    pos= s.find("XC");
    while(pos != string::npos)
    {
        sum += 90;
        s.erase(pos, 2);
        pos = s.find("XC");
    }

    pos= s.find("CD");
    while(pos != string::npos)
    {
        sum += 400;
        s.erase(pos, 2);
        pos = s.find("CD");
    }

    pos= s.find("CM");
    while(pos != string::npos)
    {
        sum += 900;
        s.erase(pos, 2);
        pos = s.find("CM");
    }
    
    for(char c : s)
    {
        switch(c)
        {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
        }
    }
    return sum;
}