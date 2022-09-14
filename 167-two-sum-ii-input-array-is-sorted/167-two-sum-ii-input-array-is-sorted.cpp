class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vc;
       int lo = 0, hi = nums.size()-1;
        while(nums[lo]+nums[hi]!=target){
            if(nums[lo]+nums[hi]<target)
                lo++;
            else
                hi--;
        }
        vc.push_back(++lo);
        vc.push_back(++hi);
       
        return vc;
    }
};