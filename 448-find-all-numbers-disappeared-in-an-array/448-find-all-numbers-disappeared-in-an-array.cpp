class Solution
{
    public:
        vector<int> findDisappearedNumbers(vector<int> &nums)
        {
            set<int> n(nums.begin(), nums.end());
            vector<int> vec;
            for (int i = 1; i <= nums.size(); i++)
            {
                if (n.find(i) == n.end())
                    vec.push_back(i);
            }
            return vec;
        }
};