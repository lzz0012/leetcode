/*
* 将整数转换为字符串
* 检查字符串是否为回文 
*/
#include <array>
#include <charconv>

bool isPalindrome(int x)
{
    std::array<char, 10> buffer; //int最大为10位数
    auto [ptr, ec] = std::to_chars(buffer.data(), buffer.data() + buffer.size(), x); //ptr指向最后一个写入字符的下一个位置
     
    int left = 0;
    int right = ptr - buffer.data() - 1; //指向最后一个字符
    while(left < right)
    {
        if(buffer[left] != buffer[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
