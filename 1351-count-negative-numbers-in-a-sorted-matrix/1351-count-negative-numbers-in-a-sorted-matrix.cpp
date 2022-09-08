class Solution
{
    public:
        int countNegatives(vector<vector < int>> &g)
        {
            int sum = 0, m = g.size(), n = g[0].size();
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    if (g[i][j] <= -1)
                    {
                        sum += n - j;
                        break;
                    }
            }
            return sum;
        }
};