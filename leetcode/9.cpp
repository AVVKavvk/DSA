class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int ans = 0, digit, n;
        n = x;
        while (x > 0)
        {
            digit = x % 10;

            ans = ans * 10 + digit;
            x = x / 10;
        }
        return n == ans;
    }
};