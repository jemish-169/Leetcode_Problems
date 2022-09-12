class Solution {
     private: int findFirst(vector<int>& nums, int target)
    {
        int idx = -1, start =0,end= nums.size()-1;
        while(start<=end)
        {
           int mid = (start+end)/2;
            if(nums[mid]<=target)
            {
                start = mid+1;
            }
            else
                end = mid-1;
             if(nums[mid]==target) idx = mid;
        }
        return idx;
    }
     private: int findLast(vector<int>& nums, int target)
    {
        int idx = -1, start =0,end= nums.size()-1;
        while(start<=end)
        {
           int mid = (start+end)/2;
            if(nums[mid]<target)
            {
                start = mid+1;
            }
            else
                end = mid-1;
             if(nums[mid]==target) idx = mid;
        }
        return idx;
    }
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini = 0,maxi = nums.size()-1,mid = (mini+maxi)/2;
        vector<int> vc;
        if(nums.size()==0)
        {
             vc.push_back(-1);
                vc.push_back(-1);
                return vc;
        }
        vc.push_back(findLast(nums,target));
        vc.push_back(findFirst(nums,target));
        return vc;
     }
};