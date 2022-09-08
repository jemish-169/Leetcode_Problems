class Solution
{
    public:
        string mergeAlternately(string w1, string w2)
        {
            int s1 = w1.size(), s2 = w2.size(), s = max(s1, s2);
            string str = "";

            for (int i = 0; i < s; i++)
            {
                if (i < s1)
                    str.push_back(w1[i]);
                if (i < s2)
                    str.push_back(w2[i]);
            }
            return str;
        }
};