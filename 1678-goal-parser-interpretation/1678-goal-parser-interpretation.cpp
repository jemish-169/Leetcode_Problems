class Solution
{
    public:
        string interpret(string c)
        {
            string str = "";
            for (int i = 0; i < c.size(); i++)
            {
                if (c[i] == 'G')
                    str.push_back('G');
                else if (c[i] == '(' && c[i + 1] == ')')
                {
                    i++;
                    str.push_back('o');
                }
                else
                {
                    i += 3;
                    str.push_back('a');
                    str.push_back('l');
                }
            }
            return str;
        }
};