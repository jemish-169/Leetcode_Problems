class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> st1,st2;
        for(auto i : nums1) st1[i]++;
        for(auto i : nums2) st2[i]++;
        
        vector<int> vc1,vc2;
        for(auto i : st1){
            if(st2.find(i.first)!=st2.end()){
                auto j = st2.find(i.first);
                int x = min(i.second,j->second);
                while(x--)
                    vc1.push_back(i.first);
        }
    }
        return vc1;
}
};