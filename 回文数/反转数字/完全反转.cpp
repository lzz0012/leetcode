/*
* 通过除法和取余运算来检查一个整数是否为回文数
* @param x 要检查的整数
* @return 如果整数是回文数，则返回 true；否则返回 false
*/

//完全反转
bool isPalindrome(int x)
{
    // 负数和以0结尾的非零数不是回文数
    if(x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int original = x;
    long long reversed = 0;
    while(x != 0)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return reversed == original;
}

