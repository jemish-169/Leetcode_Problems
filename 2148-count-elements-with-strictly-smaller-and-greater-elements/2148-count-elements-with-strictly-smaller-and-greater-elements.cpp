class Solution
{
    public:
        int countElements(vector<int> &nums)
        {
            int mini = INT_MAX, maxi = INT_MIN, ans = 0;
            for (auto i: nums)
            {
                mini = min(mini, i);
                maxi = max(maxi, i);
            }
            for (auto i: nums)
                if (i > mini && i < maxi)
                    ans++;
            return ans;
        }
};