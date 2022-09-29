class Solution
{
    public:
        int subarraysDivByK(vector<int> &nums, int k)
        {
            vector<int> vec(k);
            vec[0] = 1;
            int pref = 0;
            int sum = 0;
            for (auto i: nums)
            {
                pref = (pref + i % k + k) % k;
                sum += vec[pref]++;
            }
            return sum;
        }
};