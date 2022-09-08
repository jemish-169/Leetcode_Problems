class Solution
{
    public:
        string interpret(string c)
        {
            string str = "";
            for (int i = 0; i < c.size(); i++)
            {
                if (c[i] == 'G')
                    str += 'G';
                else if (c[i] == '(' && c[i + 1] == ')')
                {
                    i++;
                    str += 'o';
                }
                else
                {
                    i += 3;
                    str += "al";
                }
            }
            return str;
        }
};