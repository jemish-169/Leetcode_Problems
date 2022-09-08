class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mini = 0,maxi = nums.size()-1,mid = (mini+maxi)/2;
        while(nums[mid]!=target)
        {
            if(mini >= maxi)
                return -1;
            if(nums[mid]<target)
                mini = mid+1;
            else
                maxi = mid-1;
            mid = (mini+maxi)/2;
        }
        return mid;
    }
};