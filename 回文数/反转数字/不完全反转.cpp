bool isPalindrome(int x)
{
    // 负数和以0结尾的非零数不是回文数
    if(x < 0 || (x % 10 == 0 && x != 0))
        return false;
    
    int reversed = 0;
    while(x > reversed)
    {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return x == reversed || x == reversed / 10;
}