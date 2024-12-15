class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;
        while (x != 0)
        {
            int digit = x % 10;

            // Check for overflow before updating rev
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
            {
                return 0; // Overflow for positive numbers
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
            {
                return 0; // Overflow for negative numbers
            }

            rev = rev * 10 + digit;
            x /= 10;
        }
        return rev;
    }
};