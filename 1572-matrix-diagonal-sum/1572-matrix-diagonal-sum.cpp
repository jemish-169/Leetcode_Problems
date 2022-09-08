class Solution
{
    public:
        int diagonalSum(vector<vector < int>> &mat)
        {
            int s = mat.size(), sum = 0;
            for (int i = 0; i < s; i++)
            {
                sum += mat[i][i] + mat[i][s - 1 - i];
            }
            if (s % 2 == 1)
                sum -= mat[s / 2][s / 2];
            return sum;
        }
};