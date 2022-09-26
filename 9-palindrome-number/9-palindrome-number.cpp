class Solution
{
    public:
        bool isPalindrome(int x)
        {
            string s = to_string(x);
            int a = (s.size() - 1);
            for (int i = 0; i <= a / 2; i++)
            {
                if (s[i] != s[a - i])
                    return false;
            }
            return true;
        }
};