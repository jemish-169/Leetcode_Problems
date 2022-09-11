class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a =0;
        for(auto num : nums)
        {
            if(num!=0) nums[a++] = num;
        }
        int x = nums.size()-a;
        while(x)
        {
            nums[nums.size()-x]=0;
            x--;
        }
    }
};