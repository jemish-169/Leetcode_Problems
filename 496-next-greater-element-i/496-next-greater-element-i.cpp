class Solution
{
    public:
        vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> vec;
            for (auto i: nums1)
            {
                bool c = true, b = false;
                for (auto j: nums2)
                {
                    if (i == j)
                        b = true;
                    if (b && j > i)
                    {
                        c = false;
                        vec.push_back(j);
                        break;
                    }
                }
                if (c)
                    vec.push_back(-1);
            }
            return vec;
        }
};