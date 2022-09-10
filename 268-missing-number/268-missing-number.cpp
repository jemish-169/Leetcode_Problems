class Solution
{
    public:
        int missingNumber(vector<int> &nums)
        {
            int sum = accumulate(begin(nums), end(nums), 0), maxi = *max_element(begin(nums), end(nums)), z = maxi *(maxi + 1) / 2;
            return (z == sum ? (std::find(nums.begin(), nums.end(), 0) == nums.end() ? 0 : maxi + 1) : z - sum);
        }
};