class Solution
{
    public:
        bool canMakeArithmeticProgression(vector<int> &arr)
        {
            sort(begin(arr), end(arr));
            int m = arr[1] - arr[0];
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i] - arr[i - 1] != m)
                    return false;
            }
            return true;
        }
};