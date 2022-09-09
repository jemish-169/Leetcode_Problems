class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mini = 0,maxi = nums.size()-1;
        
        while(mini<maxi)
        {  
          int mid = mini+(maxi-mini)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                mini = mid+1;
            else
                maxi = mid;
          
        }
        
        return nums[mini]<target?mini+1:mini;
    }
};