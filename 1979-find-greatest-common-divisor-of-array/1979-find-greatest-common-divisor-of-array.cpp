class Solution
{
    public:
        int findGCD(vector<int> &nums)
        {
            int mini = *min_element(begin(nums), end(nums)), maxi = *max_element(begin(nums), end(nums));

            return __gcd(mini, maxi);
        }
};