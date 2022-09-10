class Solution
{
    public:
        string findDifferentBinaryString(vector<string> &nums)
        {
            set<string> n(nums.begin(), nums.end());
            int x = nums[0].size();
            int p = pow(2, x);
            for (int i = 0; i < p; i++)
            {
                string bin = std::bitset<16> (i).to_string();
                bin = bin.substr(bin.size() - x);
                if (n.find(bin) == n.end())
                    return bin;
            }
            return "abc";
        }
};