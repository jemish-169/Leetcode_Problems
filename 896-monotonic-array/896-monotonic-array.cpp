class Solution
{
    public:
        bool isMonotonic(vector<int> &nums)
        {
            if (nums.size() == 1)
                return true;
            bool b = true;
            int j = 0, k = 0;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] < nums[i + 1])
                {
                    if (i != j)
                        return false;
                    j++;
                }
                else if (nums[i] > nums[i + 1])
                {
                    if (i != k)
                        return false;
                    k++;
                }
                else if (nums[i] == nums[i + 1])
                {
                    j++;
                    k++;
                }
            }
            return true;
        }
};