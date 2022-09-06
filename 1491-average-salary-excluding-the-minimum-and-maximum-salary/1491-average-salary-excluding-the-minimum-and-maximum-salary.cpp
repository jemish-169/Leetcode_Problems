class Solution
{
    public:
        double average(vector<int> &s)
        {
            double mini = s[0], maxi = s[0], sum = 0;
            for (auto i: s)
            {
                if (i < mini)
                    mini = i;
                if (i > maxi)
                    maxi = i;
                sum += i;
            }
            return (sum - maxi - mini) / (s.size() - 2);
        }
};