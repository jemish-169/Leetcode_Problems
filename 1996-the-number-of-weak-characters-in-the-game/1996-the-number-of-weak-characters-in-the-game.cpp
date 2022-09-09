class Solution
{
    public:
        static bool comp(vector<int> &a, vector<int> &b)
        {
            if (a[0] == b[0])
            {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        }
    int numberOfWeakCharacters(vector<vector < int>> &p)
    {
        sort(begin(p), end(p), comp);
        int x = INT_MIN, ans = 0;
        for (int i = p.size() - 1; i >= 0; i--)
        {
            if (p[i][1] < x)
                ans++;
            x = max(x, p[i][1]);
        }
        return ans;
    }
};