class Solution
{
    public:
        bool canPlaceFlowers(vector<int> &f, int n)
        {
            int cnt = 0, sum = 0, start = 0;
            for (int i = 0; i < f.size(); i++)
            {
                if (f[i] == 0)
                    cnt++;
                else
                {
                    sum += (cnt - 1) / 2;
                    if (start == 0 && cnt > 0 && cnt % 2 == 0)
                        sum++;
                    cnt = 0;
                    start = i + 1;
                }
            }
            if (f.size() == cnt && cnt % 2 == 1)
            {
                sum = (cnt + 1) / 2;
                return (sum >= n ? true : false);
            }
            sum += (cnt - 1) / 2;
            if (cnt % 2 == 0 && cnt > 0)
                sum++;
            return (sum >= n ? true : false);
        }
};