class Solution
{
    public:
        string freqAlphabets(string s)
        {
            string str = "";
            int size = s.size();
            for (int i = 0; i < size; i++)
            {
               	// cout << int(s[i] - 48) << endl;
                if (i + 2 < size && s[i + 2] == '#')
                {
                    int sum = (s[i] - 48) *10 + (s[i + 1] - 48);
                    char a = 'a' + sum - 1;
                    i += 2;
                    str += a;
                }
               	else
               	{
               	    int sum = (s[i] - 48);
               	    char a = 'a' + sum - 1;
               	    str += a;
               	}
            }
            return str;
        }
};