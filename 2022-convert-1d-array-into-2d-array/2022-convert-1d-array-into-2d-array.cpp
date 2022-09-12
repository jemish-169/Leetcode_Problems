class Solution
{
    public:
        vector<vector < int>> construct2DArray(vector<int> &o, int m, int n)
        {
            vector<vector < int>> vec;
            if (m *n != o.size()) return {};

            for (int i = 0; i < m; i++)
            {
                vector<int> v((o.begin() + (i *n)), (o.begin() + (i *n) + n));
                vec.push_back(v);
            }
            return vec;
        }
};