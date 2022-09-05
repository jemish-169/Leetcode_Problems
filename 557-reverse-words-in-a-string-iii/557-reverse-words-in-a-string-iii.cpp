class Solution
{
    public:
        string reverseWords(string s)
        {
            int x = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    x = i;
                    string str = "";
                    while (i < s.size() && s[i] != ' ')
                    {
                        str = s[i] + str;
                        i++;
                    }
                    // cout << str << " " << s << endl;
                    s.replace(x, i - x, str);
                }
            }
            return s;
        }
};