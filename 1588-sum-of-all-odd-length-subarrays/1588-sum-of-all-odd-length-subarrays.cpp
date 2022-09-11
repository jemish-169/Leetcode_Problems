class Solution
{
    public:
        int sumOddLengthSubarrays(vector<int> &arr)
        {
            int sum = 0, n = arr.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j += 2)
                {
                    // cout << sum << endl;
                    sum += accumulate(arr.begin() + i, arr.begin() + j + 1, 0);
                }
            }
            return sum;
        }
};