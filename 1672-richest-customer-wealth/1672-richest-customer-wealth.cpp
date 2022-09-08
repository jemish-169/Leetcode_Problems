class Solution
{
    public:
        int maximumWealth(vector<vector < int>> &a)
        {
            int maxi = 0;
            for (int i = 0; i < a.size(); i++)
                maxi = max(maxi, accumulate(a[i].begin(), a[i].end(), 0));
            return maxi;
        }
};