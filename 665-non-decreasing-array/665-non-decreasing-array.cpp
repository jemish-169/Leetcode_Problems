class Solution {
public:
//     bool checkPossibility(vector<int>& nums) {
//        int cnt =0;
        
//         for(int i =0; i<nums.size()-1; i++){
//             if(nums[i]>nums[i+1])
//                 cnt++; 
//             if(i-2<0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];                    //modify nums[i-1] of a priority
//                 else nums[i] = nums[i-1]; 
//         }
//         if(cnt>1) return false;
//         else return true;
//     }
    bool checkPossibility(vector<int>& nums) {
        int cnt = 0;
        for(int i = 1; i < nums.size() && cnt<=1 ; i++){
            if(nums[i-1] > nums[i]){
                cnt++;
                if(i-2<0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];
                else nums[i] = nums[i-1];
            }
        }
        return cnt<=1;
    } 
};