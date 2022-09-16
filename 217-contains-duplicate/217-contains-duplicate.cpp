class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mp;
        for(auto i : nums){
        if(mp.find(i)!=mp.end())
            return true;
        else
            mp.insert(i);
    }
    return false;
    }
};