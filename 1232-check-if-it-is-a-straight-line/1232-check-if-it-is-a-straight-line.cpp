class Solution
{
    public:
        bool checkStraightLine(vector<vector < int>> &c)
        {
            int z = c[1][0] - c[0][0];
            if (z != 0)
            {
                double m = double(c[1][1] - c[0][1]) / (c[1][0] - c[0][0]);
                for (int i = 0; i < c.size() - 1; i++)
                {
                    if ((c[i + 1][1] - c[i][1]) != (c[i + 1][0] - c[i][0]) *m)
                        return false;
                }
                return true;
            }
            else
            {
                for (int i = 0; i < c.size() - 1; i++)
                {
                    if ((c[i + 1][0] - c[i][0]) != 0)
                        return false;
                }
                return true;
            }
        }
};