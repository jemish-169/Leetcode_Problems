class Solution
{
    public:
        bool areAlmostEqual(string s1, string s2)
        {
            int x = 0;
            for (int i = 0; i < s1.size(); i++)
            {
                if (s1[i] != s2[i])
                    x++;
            }
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if ((x == 2 || x == 0) && s1 == s2)
                return true;
            else
                return false;
        }
};