class Solution
{
    public:
        bool isPalindrome(int x)
        {
            string s = to_string(x);
            int a = s.size();
            for (int i = 0; i < a; i++)
            {
                if (s[i] != s[a - i - 1])
                    return false;
            }
            return true;
        }
};