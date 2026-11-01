class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();

        if(n*m!=r*c){
            return mat;
        }

        vector<vector<int>> ans(r,vector<int>(c));
        for(int k = 0;k<m*n;k++){
            int a = k/m;
            int b = k%m;

           int x = k/c;
           int y = k%c;

           ans[x][y] = mat[a][b];
        }
        return ans;
  
    }
};