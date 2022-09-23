class Solution
{
    public:
        int maximumWealth(vector<vector < int>> &a)
        {
            int maxi = 0, n = a.size();
            for (int i = 0; i < n; i++)
                maxi = max(maxi, accumulate(a[i].begin(), a[i].end(), 0));
            return maxi;
        }
};