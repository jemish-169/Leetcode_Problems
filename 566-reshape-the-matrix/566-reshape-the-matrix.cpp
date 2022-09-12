class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c)
            return mat;
        vector<int> vec;
        for(int i = 0; i<mat.size();++i){
            for(int j = 0;j<mat[i].size();++j){
                vec.push_back(mat[i][j]);
            }
        }
        // for(auto i : vec)
        //     cout<<i<<" ";
        int p =0;
        vector<vector<int>> res;
        for(int i = 0; i<r;++i){
            vector<int> local;
            for(int j = 0;j<c;++j){
                local.push_back(vec[p]);
                p++;
            }
            res.push_back(local);
        }
        return res;    
    }
};