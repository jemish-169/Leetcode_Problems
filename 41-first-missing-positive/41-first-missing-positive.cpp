class Solution
{
    public:
        int firstMissingPositive(vector<int> &nums)
        {
            set<int> n(nums.begin(), nums.end());
            auto it = n.end();
            it--;
            for (int i = 1; i <= *it; i++)
            {
                if (n.find(i) == n.end())
                    return i;
            }
            if (*it < 1)
                return 1;
            else
                return *it + 1;
        }
};