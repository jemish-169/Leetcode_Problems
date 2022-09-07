class Solution
{
    public:
        int nearestValidPoint(int x, int y, vector<vector < int>> &p)
        {
            int maxi = INT_MAX, id = 0;
            bool b = false;
            for (int i = 0; i < p.size(); i++)
            {
                int sum = abs(x - p[i][0]) + abs(y - p[i][1]);
                if (maxi > sum && (p[i][0] == x || p[i][1] == y))
                {
                    maxi = sum;
                    id = i;
                    b = true;
                }
            }
            if (b)
                return id;
            else
                return -1;
        }
};