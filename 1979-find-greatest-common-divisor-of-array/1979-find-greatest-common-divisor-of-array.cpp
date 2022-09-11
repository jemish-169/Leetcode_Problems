class Solution
{
    public:
        int findGCD(vector<int> &nums)
        {
            int mini = INT_MAX, maxi = INT_MIN;
            for (auto i: nums)
            {
                mini = min(i, mini);
                maxi = max(maxi, i);
            }
            return __gcd(mini, maxi);
        }
};