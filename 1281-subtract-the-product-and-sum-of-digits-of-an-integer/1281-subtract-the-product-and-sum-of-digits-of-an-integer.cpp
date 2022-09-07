class Solution
{
    public:
        int subtractProductAndSum(int n)
        {
            int sum = 0, mul = 1;
            while (n)
            {
                int x = n % 10;
                sum+=x;
                mul*=x;
                n/=10;
            }
            return mul-sum;
        }
};