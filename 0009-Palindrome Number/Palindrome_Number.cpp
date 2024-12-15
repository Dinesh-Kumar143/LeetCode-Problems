class Solution
{
public:
    bool isPalindrome(int x)
    {
        int a = x;
        long rev = 0;
        while (a > 0)
        {
            rev = (rev * 10) + (a % 10);
            a /= 10;
        }
        return x == rev;
    }
};