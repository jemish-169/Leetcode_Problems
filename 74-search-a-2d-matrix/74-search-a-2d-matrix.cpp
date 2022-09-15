class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m = mat.size(),n = mat[0].size();
       int row = 0,col = n-1;
        
        while(col > -1 && row < m)
        {
            int cur = mat[row][col];
            if(cur==t)return true;
            if(cur<t) row++;
            else col--;
        }
        return false;
    }
};